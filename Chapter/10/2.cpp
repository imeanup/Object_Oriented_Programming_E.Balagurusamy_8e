#include <iostream>

using namespace std;
int main(){
    int size = 30;
    char city[20];
    cout << "Enter the city name: ";
    cin >> city;
    cout << "City name: " << city << endl;

    cout << "Enter city name again: " << endl;
    cin.getline(city, size);
    cout << "City name now: " << city << endl;

    cout << "Enter another city name: ";
    cin.getline(city, size);
    cout << "New city name: " << city << endl;
    return 0;
}