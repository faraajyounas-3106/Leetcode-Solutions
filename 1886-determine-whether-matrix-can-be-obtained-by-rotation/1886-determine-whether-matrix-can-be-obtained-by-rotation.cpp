class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        
        for(int k  = 0 ;  k < 4 ; k++){  // 90,180,270,360
            if(mat == target)
            return true;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = i + 1 ; j < mat.size() ; j++){
            swap(mat[i][j] ,mat[j][i]);
        }
        }
        for(int i = 0 ; i < mat.size() ; i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        }
        return mat == target;
    }
     
};