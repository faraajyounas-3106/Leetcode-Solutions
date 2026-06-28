class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        arr[0] =1;
        int num = 1;

        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] != num){
                num++;
            }
        }
        return num;
    }
};