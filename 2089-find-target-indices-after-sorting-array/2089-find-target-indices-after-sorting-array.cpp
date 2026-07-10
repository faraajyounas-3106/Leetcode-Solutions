class Solution {
public:
int last(vector<int> nums, int target){
    int left = 0 ; 
        int right = nums.size() - 1;
        int mid = 0;
        int start = 0 ;
        int res = -1;
        while(left <= right){
             mid = left + (right - left) / 2;

            if(nums[mid] == target){
                res = mid;
                left = mid + 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
        }
        
        }
        return res;
    }
int first(vector<int> nums, int target){
    int left = 0 ; 
        int right = nums.size() - 1;
        int mid = 0;
        int start = 0 ;
        int res = -1;
        while(left <= right){
             mid = left + (right - left) / 2;

            if(nums[mid] == target){
                res = mid;
                right = mid -1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
        }
        }
        return res;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int first1 = first(nums,target);
        if(first1 == -1) return {};
        int last1 = last(nums,target);

        vector<int> ans;
        for(int i = first1 ; i <= last1 ; i++){
            ans.push_back(i);
        }
        return ans;
    }
};