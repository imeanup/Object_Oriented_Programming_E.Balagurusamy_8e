#include <iostream>

using namespace std;

class Room{
    float mWidth;
    float mLength;
    public:
        Room(){}
        Room(float w, float h)
            :mWidth(w), mLength(h){

            }
        operator float(){
            return (float)mWidth * mLength;
        }
        float getWidth(){
            return mWidth;
        }
        float getLength(){
            return mLength;
        }
};

int main(){
    Room objRoom1(2.5, 2.5);
    float fTotalArea;
    fTotalArea = objRoom1;
    cout << fTotalArea << endl;
    return 0;
}