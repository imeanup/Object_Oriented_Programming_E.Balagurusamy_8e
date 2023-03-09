#include <iostream>
#include <cmath>

using namespace std;

class Interest{
    private:
        float principle, rate, time, interest;
    public:
        Interest(float principle, float rate, float time){
            this->principle = principle;
            this->rate = rate;
            this->time = time;
        }

        void SI(){
            interest = (principle * rate * time) / 100;
        }

        void CI(){
            float amount = principle * pow((1+rate/100), time);
            interest = amount - principle;
        }

        float operator() (){
            return interest;
        }
};

int main(){
    float p, r, t;
    int choice;

    cout << "Enter the principle amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period (in years): ";
    cin >> t;

    Interest cal(p, r, t);
    cout << "Please select an option " << endl 
        << "Option 1: Simple Interest" << endl 
        << "Option 2: Compound Interest" << endl;
    cin >> choice;
    if (choice == 1){
        cal.SI();
    }
    else if (choice == 2){
        cal.CI();
    }
    else{
        cout << "Invalid option selected" << endl;
    }
    cout << "Interest: " << cal() << endl;

    return 0;
}