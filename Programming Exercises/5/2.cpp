#include <iostream>
#include <vector>

using namespace std;

class Vector{
    private:
        vector<float> elements;
    public:
        Vector(initializer_list<float> elems){
            elements = elems;
        }

        void setElement(int index, float value){
            elements[index] = value;
        }

        void scalarMultiply(float scalar){
            for (int i = 0; i < elements.size(); i++){
                elements[i] *= scalar;
            }
        }

        void display(){
            cout << "(";
            for (int i = 0; i < elements.size(); i++){
                cout << elements[i];
                if (i != elements.size() - 1){
                    cout << ", ";
                }
            }
            cout << ")" << endl;
        }
};

int main(){
    // vector<float> elements = {10.0, 20.0, 30.0};
    // Vector v(elements);
    Vector v = {10.0, 20.0, 30.0};
    v.display();

    v.setElement(1, 9.8);
    v.display();

    v.scalarMultiply(2.1);
    v.display();

    return 0;
}

/*
Write a class to represent a vector (a series of float values). Include member functions to perform the following tasks:
(a) To create the vector.
(b) To modify the value of a given element.
(c) To multiply by a scalar value
(d) To display the vector in the form (10, 20, 30, ...)
Write a program to test your class.
*/