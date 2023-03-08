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
            return (this->author == author && this->title == title) ? true : false;
        }

        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock: " << stock_position << endl;
        }

        void sales(int num_copies){
            if (num_copies > stock_position){
                cout << "Required copies not in stock" << endl;
            }
            else{
                cout << "Total cost: " << price * stock_position << endl;
                stock_position -= num_copies;
            }
        }
};