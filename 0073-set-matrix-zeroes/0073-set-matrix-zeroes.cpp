class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums[0].size();
    vector<int> row(nums.size(),0);
    vector<int> col(n,0);

    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < n ; j++){
            if(nums[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
    }
    }
     for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < n ; j++){
            if(row[i] == 1 || col[j] == 1){
                nums[i][j] = 0;
            }
    }
    }
    }
};