class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size() ; 
    int mini = nums[0];
    int profit = 0;
    for(int i = 0; i < n ; i++){
        mini = min(mini,nums[i]);
        profit = max(profit , nums[i] - mini); 
    }
    if(profit == 0)
    return -1;
    return profit;
    }
};