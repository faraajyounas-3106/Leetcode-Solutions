class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string s = "";
         if(strs.empty())
         return "";
        for(int i = 0; i < strs[0].size() ; i++){
            char c = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++){
                if(i >= strs[j].size() || strs[j][i] != c){
                    return s;
                }
            }
                    s += c;
            }

        return s;
}
};