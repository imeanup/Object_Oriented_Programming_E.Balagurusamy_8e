/*
Write a program using an iterator and while() construct to display the contents of a string object.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello World!";
    string::iterator it = str.begin();

    while (it != str.end())
    {
        cout << *it;
        it++;
    }

    return 0;
}

/*
Hello World!
*/