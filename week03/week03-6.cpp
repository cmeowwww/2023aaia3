week03-6.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> a;
int now;
while(1){
cin >> now;
if(now==0) break;
a.push_back(now);
}
cin >> now;
int ans=0;
for(int b:a){
if(b==now) ans++;
}
cout << ans << "\n";
}
