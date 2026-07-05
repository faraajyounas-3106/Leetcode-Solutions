class Solution {
public:

    int maxProfit(vector<int>& nums) {
    int n = nums.size() ; 
    int mini = nums[0];
    int profit = 0;
    for(int i = 0; i < n ; i++){
        mini = min(mini,nums[i]);
        profit = max(profit , nums[i] - mini); // max diff between minimum and nums[i] i-e max num in nums
    }
    return profit;
    }
};