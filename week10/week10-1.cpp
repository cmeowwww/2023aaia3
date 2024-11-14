#include <iostream>
using namespace std;

class Cat{ ///貓的類別
public:
    void printf(){
        cout << "I am a cat.\n";
        }
};

class Mouse{
public:
    void printf(){
        cout << "I am a mouse .chi chi\n";
    }
};


int main()
{
    Cat cat1,cat2; /// cat1, cat2 都是cat
    cat1.printf();
    cat2.printf();
    Mouse mouse1,mouse2;
    mouse1.printf();
    mouse2.printf();
}
