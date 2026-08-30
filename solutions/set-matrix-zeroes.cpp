class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;

        int m = matrix.size();
        int n = matrix[0].size();
        
        int col0 = 1; // Tracks if the 0th column needs to be zeroed

        // Step 1: Use the 0th row and 0th column as markers
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                col0 = 0; // The 0th column has a zero
            }
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark the row
                    matrix[0][j] = 0; // Mark the column
                }
            }
        }

        // Step 2: Update the matrix based on markers
        // CRITICAL: Iterate backwards to avoid overwriting the markers in the 0th row/col prematurely!
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
            // Handle the 0th column separately
            if (col0 == 0) {
                matrix[i][0] = 0;
            }
        }
    }
};
