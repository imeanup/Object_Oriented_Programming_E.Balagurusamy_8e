#include<iostream>
using namespace std;

int counter = 0;
int main(){
    cout  << "Hello" <<endl;
    counter++;
    if (counter < 10){
        main();
    }
    return 0;
}

/*zsh: segmentation fault*/
/*
To fix use conditional statement to limit the number of recursive calls to the main function.
*/