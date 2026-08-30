class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans;
        const int m = (int)matrix.size();
        const int n = (int)matrix[0].size();
        ans.reserve(m*n);
        int left = 0, right = n-1;
        int top = 0, down = m-1;
        while(left <= right && top <= down){
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= down; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= down){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if(left <= right){
                for(int i = down; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
        
    }
};
