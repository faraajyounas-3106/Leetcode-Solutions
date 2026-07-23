class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n <=2 ){
            return n;
        }   
        int pow = 1;
        while(pow <=n){
            pow *= 2;
        }
        return pow;
    }
};