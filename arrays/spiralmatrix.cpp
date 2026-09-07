class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans(m*n);
        int a = 0;
        int top = 0;
        int right = n - 1;
        int bottom = m - 1;
        int left = 0;
        while(top <= bottom && left <= right){
            for(int i = top; i <= right; i++){
                ans[a] = matrix[top][i];
                a++;
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans[a] = matrix[i][right];
                a++;
            }
            right--;
            if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans[a] = matrix[bottom][i];
                a++;
            }
            bottom--;
            }

            if(left <= right){
          
            for(int i = bottom; i >= top; i--){
                ans[a] = matrix[i][left];
                a++;
            }
            left++;
            }
        }
        return ans;
    }
};