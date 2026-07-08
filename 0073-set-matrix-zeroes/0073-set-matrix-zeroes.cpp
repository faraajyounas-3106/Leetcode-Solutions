class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums[0].size();

    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < n ; j++){

            if(nums[i][j] == 0){
                for(int k = 0 ; k < n ; k++){
                    if(nums[i][k] != 0){
                        nums[i][k] = 129809;
                    }
                }
                for(int l = 0 ; l < nums.size() ; l++){
                    if(nums[l][j] != 0){
                        nums[l][j] =129809;
                    }
                }
            }        


        }
    }
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < n ; j++){
            if(nums[i][j] == 129809){
                nums[i][j] = 0;
            }
        }
    }
    }
};