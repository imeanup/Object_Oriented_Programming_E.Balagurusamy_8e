#include <iostream>
#include <string>

using namespace std;

class Books{
    private:
        string author;
        string title;
        float price;
        string publisher;
        int stock_position;
        static int success_transaction; // static member to record success transactions or sales
        static int unsuccess_transaction; // static member function for unsuccessful transactions
    public:
        Books(string author, string title, float price, string publisher, int stock_position){
            this->author = author;
            this->title = title;
            this->price = price;
            this->publisher = publisher;
            this->stock_position = stock_position;
        }

        bool searchBook(string author, string title){
            return (this->author == author && this->title == title) ? true:false;
        }

        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock: " << stock_position << endl;
        }
        // Private member function
        void updatePrice(float newPrice){
            price = newPrice;
        }
    
        void sales(){
            int num_copies;
            cout << "Enter the copies required: ";
            cin >> num_copies;
            if (num_copies > stock_position){
                cout << "Required copies not in stock" << endl;
                unsuccess_transaction++; // increment unsuccessful transactions
            }
            else{
                cout << "Total costs: $ " << price * num_copies << endl;
                stock_position -= num_copies;
                success_transaction++; // increment successful transactions
            }
        }
        // static member function to get successful transaction
        static int getTotalSales(){
            return success_transaction;
        }
        // static member function to get unsuccessful transaction
        static int getTotalFailedSales(){
            return unsuccess_transaction;
        }
};
// Static member initilization
int Books :: success_transaction = 0;
int Books :: unsuccess_transaction = 0;

int main(){
    // Creating inventory
    Books* book1 = new Books("J.K. Rowling", "Harry Potter and the Philosopher's Stone", 10.99, "Bloomsbury Publishing", 5);
    Books* book2 = new Books("J.R.R. Tolkien", "The Lord of the Rings", 19.99, "HarperCollins", 2);
    Books* book3 = new Books("Stephen King", "It", 9.99, "Viking Press", 0);
    Books* book4 = new Books("George R.R. Martin", "A Game of Thrones", 14.99, "Bantam Spectra", 7);

    Books* inventory[] = {book1, book2, book3, book4};

    string author, title;
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter title: ";
    getline(cin, title);

    bool found_book = false;

    for (int i = 0; i < 4; i++) {
        if (inventory[i]->searchBook(author, title)) {
            found_book = true;
            inventory[i]->display();
            cout << endl;
            inventory[i] -> sales();
            break;
        }
    }
     if (!found_book){
        cout << "Book not found in inventory" << endl;
    }

    // Update price of a book
    book1->updatePrice(12.99);

    // Display updated price
    book1->display();

    // Display transaction statistics
    cout << "Successful Transactions: " << Books::getTotalSales() << endl;
    cout << "Unsuccessful Transactions: " << Books::getTotalFailedSales() << endl;

    // Free
    delete book1;
    delete book2;
    delete book3;
    delete book4;

    return 0;
}