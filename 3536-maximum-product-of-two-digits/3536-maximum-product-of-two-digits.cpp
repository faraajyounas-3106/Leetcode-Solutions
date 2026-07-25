class Solution {
public:
    int maxProduct(int n) {
    long long rev = 1;
    int max_ans = INT_MIN;
       vector<int> arr;
       while(n > 0){
        int digit = n % 10;
        arr.push_back(digit);
        rev = rev * 10 + digit;
        n = n / 10;
       } 
    int ans = 0;
       for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i + 1 ; j < arr.size() ; j++){
            ans = arr[i] * arr[j]; 
            max_ans = max(max_ans,ans);
        }
       }
       return max_ans;
    }
};