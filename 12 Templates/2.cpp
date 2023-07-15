// Write a class template to represent a generic vector. Include member functions to perform the following tasks:
// a) To create the vector
// b) To modify the value of a given element.
// c) To multiply by a scalar value.
// d) To display the vector in the form (10, 20, 30,....).

#include <iostream>
using namespace std;

template<class T> class Vector{
    private:
        T *arr;
        int size;
    public:
        Vector(int s);
        void setElement(int index, T value);
        void multiplyElement(T scalar);
        void display();
};

template <class T> Vector<T>:: Vector(int s){
    arr = new T[s];
    size = s;
}

template <class T> void Vector<T> :: setElement(int index, T value){
    if (index >= 0 && index < size){
        arr[index] = value;
    }
}

template <class T> void Vector<T> :: multiplyElement(T scalar){
    for (int i = 0; i < size; i++){
        arr[i] *= scalar;
    }
}

template <class T> void Vector<T> :: display(){
    cout << "(";
    for (int i = 0; i < size; i++){
        cout << arr[i];
        if (i < size-1){
            cout << ", ";
        }
    }
    cout << ")" << endl;
}

int main(){
    Vector <int> v1(4);
    Vector <double> v2(5);
    Vector <string> v3(3);

    v1.setElement(0, 10);
    v1.setElement(1, 20);
    v1.setElement(2, 30);
    v1.setElement(3, 40);

    v2.setElement(0, 1.1);
    v2.setElement(1, 2.2);
    v2.setElement(2, 3.3);
    v2.setElement(3, 4.4);
    v2.setElement(4, 5.5);

    v3.setElement(0, "Mike");
    v3.setElement(1, "Sandra");
    v3.setElement(2, "Barbara");

    v1.display();
    v2.display();
    v3.display();

    v1.multiplyElement(2);
    v1.display();
    Vector <int> v4(3);
    v4.setElement(0, 'M');
    v4.setElement(1, 'a');
    v4.setElement(2, 'b');

    v4.multiplyElement(1);
    v4.display();

    return 0;
}

/*
(10, 20, 30, 40)
(1.1, 2.2, 3.3, 4.4, 5.5)
(Mike, Sandra, Barbara)
(20, 40, 60, 80)
(77, 97, 98)
*/