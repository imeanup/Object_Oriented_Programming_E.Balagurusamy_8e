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

/*
Enter the city name: Delhi
City name: Delhi
Enter city name again: 
City name now: 
Enter another city name: Chennai
New city name: Chennai

** Notice the output here:
Enter the city name: New Delhi
City name: New
Enter city name again: 
City name now:  Delhi 
Enter another city name: Greater Bombay
New city name: Greater Bombay
*/