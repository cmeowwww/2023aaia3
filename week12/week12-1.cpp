/// 比較 class vs. struct
#include <iostream>
#include <string>
using namespace std;
struct Node{
    int val; ///value
};
class Cat{
public:
    string name;
};

int main()
{
    Cat cat1; ///大寫的形狀宣告小寫的變數
    cat1.name="Kitty";
    Node node;
    node.val=1;
}
