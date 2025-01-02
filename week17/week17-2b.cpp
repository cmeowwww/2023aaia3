class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int N=digits.size();

        for(int i=N-1; i>=0; i--){
            digits[i]=digits[i]+carry;
            if(digits[i]>=10){
                carry=1;
                digits[i]=digits[i]%10;
            }
            else{
                carry=0;
            }
        }
        if(carry==0) return digits;
        else{
            vector<int> ans(N+1);
            ans[0]=carry;
            for(int i=0; i<N; i++){
                ans[i+1] =digits[i];
            }
            return ans;
        }
    }
};
