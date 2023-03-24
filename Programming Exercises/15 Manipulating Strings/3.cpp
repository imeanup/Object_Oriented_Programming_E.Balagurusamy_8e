/*
Write a program that reads several city names from the keyboard and displays only those names beginning with characters "B" or "C".
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector <string> city_names;
    string city;
    while (true){
        cout << "Enter the city name (or '-1' to exit): ";
        getline(cin, city);
        if (city == "-1"){
            break;
        }
        if (city[0] == 'B' || city[0] == 'C'){
            city_names.push_back(city);
        }
    }
    cout << "Cities starting with B or C are: \n";
    for (const auto &city : city_names){
        cout << city << '\n';
    }
    return 0;
}