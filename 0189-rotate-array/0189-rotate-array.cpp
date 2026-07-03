class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int orig = k;
        int left = 0 ;
        k = k % nums.size();
        int right = nums.size() - 1;

        while(left <=right){  //reversal done
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        left = 0 ;
        right = k - 1;

        while(left <= right){  //reverse untill k
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        left = k;
        right = nums.size() - 1;

        while(left <= right){  //now reverse from k to right
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};