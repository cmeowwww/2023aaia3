#include <iostream>
using namespace std;

class Cat{ ///�ߪ����O
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
    Cat cat1,cat2; /// cat1, cat2 ���Ocat
    cat1.printf();
    cat2.printf();
    Mouse mouse1,mouse2;
    mouse1.printf();
    mouse2.printf();
}
