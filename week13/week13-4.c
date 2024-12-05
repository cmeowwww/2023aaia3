//week13-3.cpp解Advent of Code 2024 Day1

int main() {
    vector<int>A,B; //兩個陣列(伸縮自如)
    int a,b; // 兩個數
    
    while(cin >>a >>b){  //Step01: Input
        A.push_back(a);  //Step02:放到陣列
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());  
    int ans=0;
    for(int i=0; i<A.size();i++){ //STep03: OUtput
        cout << A[i] << " ";
        ans+=abs(A[i]-B[i]);
        
    }
    cout << "答案是" << ans;
}