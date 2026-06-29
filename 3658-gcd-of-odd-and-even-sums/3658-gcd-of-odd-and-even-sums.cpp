class Solution {
public:
int gcd(int a,int b){
        for(int n = min(a,b) ; n >=1 ; n--){
        if( a % n== 0 && b%n == 0){
            return n; 
        }
}
    return 1 ; 
}
    int gcdOfOddEvenSums(int n) {
        
        int odd = n * n ;
        int even = n*(n + 1);

        int ans = gcd(odd,even);
        return ans;
    }
};