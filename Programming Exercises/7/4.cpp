#include <iostream>
#include <string> // strcmp
using namespace std;

class String{
    char *p;
    // TODO: Compare using strlen.
    // Using strlen (or length compare) was perform in the Program 7.4 in the example. 
    public:
        String(){p = 0;}
        String(const char *s);
        String(const String &s);
        ~String();
        friend bool operator==(const String &s, const String &t);
};

String :: String(const char *s){
    p = new char[strlen(s) + 1];
    strcpy(p, s);
}

String :: String(const String &s){
    p = new char[strlen(s.p) + 1];
    strcpy(p, s.p);
}

String :: ~String(){
    delete[] p;
}

bool operator==(const String &s, const String &t) {
    return strcmp(s.p, t.p) == 0;
}

int main(){
    String s1 = "New";
    String s2 = "York";
    String s3 = "Delhi";
    String s4 = "New";

    if (s1 == s2) {
        cout << "s1 and s2 are equal" << endl;
    } else {
        cout << "s1 and s2 are not equal" << endl;
    }

    if (s1 == s3) {
        cout << "s1 and s3 are equal" << endl;
    } else {
        cout << "s1 and s3 are not equal" << endl;
    }
    if (s1 == s4) {
        cout << "s1 and s4 are equal" << endl;
    }
    else{
        cout << "s1 and s4 are not equal " << endl;
    }

    return 0;
}