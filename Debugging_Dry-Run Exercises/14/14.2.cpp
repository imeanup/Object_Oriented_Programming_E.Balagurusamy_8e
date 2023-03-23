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
        cout << "Vectors are unequal";
        v1.swap(20);
    }
    for (int y = 0; y < v1.size(); y++){
        cout << "V1: " << v1[y] << " ";
        cout << "V2: " << v2[y] << " ";
    }
    return 0;
}