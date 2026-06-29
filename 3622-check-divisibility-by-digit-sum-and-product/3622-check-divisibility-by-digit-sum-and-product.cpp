class Solution {
public:
    bool checkDivisibility(int n) {
      int orig = n;
    vector<int> sum;

    while (n > 0) {
        sum.push_back(n % 10);
        n /= 10;
    }

    int someone = 0;
    int prodone = 1;

    for (int i = 0; i < sum.size(); i++) {
        someone += sum[i];
        prodone *= sum[i];
    }

    int final = someone + prodone;

    return orig % final == 0;
    }
};