#include <iostream>
#include <cstring>
using namespace std;

class String{
    char* data;
    size_t length;

    public:
        String(){
            data = nullptr;
            length = 0;
        }
        String(const char* str){
            if (data != nullptr){
                length = strlen(str);
                data = new char[length + 1];
                strcpy(data, str);
            }
            else{
                data = nullptr;
                length = 0;
            }
        }
        String(const String& other) {
            length = other.length;
            if (other.data != nullptr) {
                data = new char[length + 1];
                std::strcpy(data, other.data);
            } else {
                data = nullptr;
            }
        }
        ~String() {
            delete[] data;
        }
        
};