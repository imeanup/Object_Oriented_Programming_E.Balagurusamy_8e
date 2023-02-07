#include <iostream>
using namespace std;

class matrix{
    int m[3][3];
    
    public:
        void read(void){
            cout << "Enter the elements of the 3x3 matrix: \n";
            int i, j;
            for (i = 0;i<3;i++){
                for(j=0;j<3;j++){
                    cout <<"m[" << i << "][" << j << "] = ";
                    cin >> m[i][j];
                }
            }
        }
        void display(void){
            int i, j;
            for(i=0;i<3;i++){
                cout << "\n";
                for(j=0;j<3;j++){
                    cout << m[i][j] <<"\t";
                }
            }
        }
        friend matrix trans(matrix); 
};

matrix trans(matrix m1){
    matrix m2;
    int i, j;
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            m2.m[i][j] = m1.m[i][j];
        }
    }
    return(m2);
}

int main(){
    matrix m1, m2;
    m1.read();
    cout <<"\nYou entered the following matrix: ";
    m1.display();
    m2 = trans(m1);
    cout << "\n\nTransposed matrix: ";
    m2.display();
    return 0;
}
