#include <iostream>
using namespace std;

class matrix{
    int m[3][3];
    
    public:
        void read(void){
            cout << "Enter the elements of the 3x3 matrix: \n";
            int i, j;
            for (i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    cout <<"m[" << i << "][" << j << "] = ";
                    cin >> m[i][j];
                }
            }
        }
        void display(void){
            int i, j;
            for(i = 0; i < 3; i++){
                cout << "\n";
                for(j = 0; j < 3; j++){
                    cout << m[i][j] <<"\t";
                }
            }
        }
        friend matrix trans(matrix); 
};

matrix trans(matrix m1){
    matrix m2;
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            m2.m[i][j] = m1.m[i][j];
        }
    }
    return(m2);
}

int main(){
    matrix m, n;
    m.read();
    cout <<"\nYou entered the following matrix: ";
    m.display();
    
    n = trans(m);
    cout << "\n\nTransposed matrix: ";
    n.display();
    return 0;
}


/*
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
& g++ 5.11\ Returning\ Objects.cpp -o 5.11\ Returning\ Objects   &
& ./5.11\ Returning\ Objects                                     &
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

Enter the elements of the 3x3 matrix: 
m[0][0] = 1
m[0][1] = 2
m[0][2] = 3
m[1][0] = 4
m[1][1] = 5
m[1][2] = 6
m[2][0] = 7
m[2][1] = 8
m[2][2] = 9

You entered the following matrix: 
1       2       3
4       5       6
7       8       9

Transposed matrix: 
1       2       3
4       5       6
7       8       9  

*/