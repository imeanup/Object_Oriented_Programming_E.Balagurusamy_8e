#include <iostream>
using namespace std;

class faculty{
    private:
        int fid;
        char name[20];
    public:
        void getdata(){
            cout << "Enter faculty id:- \t";
            cin >> fid;
            cout << "Enter Name:- \t";
            cin >> name;
        }
        // int get_fid(){
        //     return fid;
        // }
        // char get_name(){
        //     cout << name << endl;
        // }
};

class details : faculty{
    public:
        int age, exp;
        void getdetails(){
            getdata();
            cout << "Enter age:- \t";
            cin>>age;
            cout<<"Enter years of experience:- \t";
            cin>>exp;
        }
        void display(){
            cout << "\n\n" << "faculty id\t"<<fid<<endl;
            cout<<"Name of faculty\t"<<name<<endl;
            cout << "Faculty age\t" << age<<endl;
            cout << "Faculty years of experience\t"<<exp<<endl;
        }
};

int main(){
    details m;
    m.getdetails();
    m.display();
    return 0;
}