#include <iostream>
#include <string>

using namespace std;

class Books{
    string author;
    string title;
    float price;
    string publisher;
    int stock_position;

    public:
        Books(string author, string title, float price, string publisher, int stock_position){
            this->author = author;
            this->title = title;
            this->price = price;
            this->publisher = publisher;
            this->stock_position = stock_position;
        }

        bool searchBook(string title, string author){
            if (this->author == author && this->title == title) 
                return true;
            else
                return false;
        }

        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock: " << stock_position << endl;
        }

        void sales(){
            int num_copies;
            cout << "Enter number of copies to sell: ";
            cin >> num_copies;
            cout << endl;
            if (num_copies > stock_position){
                cout << "Required copies not in stock" << endl;
            }
            else{
                cout << "Total cost: $" << price * stock_position << endl;
                stock_position -= num_copies;
            }
        }
};

int main(){
    // Create inventory
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
        if (inventory[i]->searchBook(title, author)) {
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

    delete book1;
    delete book2;
    delete book3;
    delete book4;
    
    return 0;
}