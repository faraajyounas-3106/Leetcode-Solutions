class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int p_index = 0;
        int n_index = 1;
        vector<int> ans(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0){
                ans[p_index] = nums[i];
                p_index += 2;
            }
            else{
                ans[n_index] = nums[i];
                n_index += 2;
            }
        }
        return ans;
    }
};