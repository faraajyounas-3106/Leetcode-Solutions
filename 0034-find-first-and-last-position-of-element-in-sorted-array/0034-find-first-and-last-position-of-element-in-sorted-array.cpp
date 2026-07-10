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
    vector<int> searchRange(vector<int>& nums, int target) {
       int first1 = first(nums,target);
        int last1 = last(nums,target);

    vector<int> ans;
    ans.push_back(first1);
    ans.push_back(last1);
    return ans;   
    }
};