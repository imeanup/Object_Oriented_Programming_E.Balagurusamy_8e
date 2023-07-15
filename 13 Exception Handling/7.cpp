/*
Write a main program that calls a deeply nexted function containing an exception. Incorporate necessary exception handling mechanism.
*/

#include <iostream>
using namespace std;

void levelThree();
void levelTwo();
void levelOne(){
    cout << "Entering levelOne()" << endl;
    levelTwo();
    cout << "Exiting levelOne()" << endl;
}

void levelTwo(){
    cout << "Entering levelTwo()" << endl;
    levelThree();
    cout << "Exiting levelTwo()" << endl;
}

void levelThree(){
    cout << "Entering levelThree()" << endl;
    throw 10;
    cout << "Exiting levelThree()" << endl;
}

int main(){
    try{
        cout << "Entering main()" << endl;
        levelOne();
        cout << "Exiting main()" << endl;
    }
    catch(int e){
        cout << "An exception occurred. Exception number: " << e << endl;
    }
    return 0;
}

/*
Entering main()
Entering levelOne()
Entering levelTwo()
Entering levelThree()
An exception occurred. Exception number: 10
*/