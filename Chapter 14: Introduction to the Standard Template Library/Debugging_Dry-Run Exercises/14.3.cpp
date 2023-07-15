#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l1;
    l1.push_front(10);
    l1.push_back(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.push_back(10);
    l1.pop_front();
    l1.reverse();
    l1.unique();
    return 0;
}