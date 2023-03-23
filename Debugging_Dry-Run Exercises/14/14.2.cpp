#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(30);

    vector <int> v2;
    v1.push_back(20);
    v1.push_back(40);

    if(v1 == v2){
        cout << "Vectors are equal";
    }
    else{
        cout << "Vectors are unequal" << endl; 
        v1.swap(v2);   
    }
    
    for (int y = 0; y < v2.size(); y++){
        // cout << "V1: " << v1[y] << " ";
        cout << v2[y] << " ";
    }
    cout << endl;
    return 0;
}