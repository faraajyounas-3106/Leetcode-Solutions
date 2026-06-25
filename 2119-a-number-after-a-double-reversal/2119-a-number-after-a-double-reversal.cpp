class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev = 0;
        int rev2 = 0;
        int orginal = num;
        while(num != 0){
            int sum = num % 10;
            rev = rev*10 + sum;
            num /= 10;
        }
        int t_rev = rev;
        while(t_rev != 0){
            int sum = t_rev % 10;
            rev2 = rev2*10 + sum;
            t_rev /= 10;
        }
        return orginal == rev2;
    }
};