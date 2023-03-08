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
        static int success_transaction;
        static int unsuccess_transaction;
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

        void updatePrice(float newPrice){
            price = newPrice;
        }

        void sales(){
            int num_copies;
            cout << "Enter the copies required: ";
            cin >> num_copies;
            
        }
};