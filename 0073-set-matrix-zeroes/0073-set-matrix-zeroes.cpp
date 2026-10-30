// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//         int n = matrix.size();
//         int m = matrix[0].size();

//         auto markRow = [&](int i) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] != 0)
//                     matrix[i][j] = INT_MIN;
//             }
//         };

//         auto markColumn = [&](int j) {
//             for (int i = 0; i < n; i++) {
//                 if (matrix[i][j] != 0)
//                     matrix[i][j] = INT_MIN;
//             }
//         };

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == 0) {
//                     markRow(i);
//                     markColumn(j);
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == INT_MIN)
//                     matrix[i][j] = 0;
//             }
//         }
//     }
// };


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> col(m, 0);
        vector<int> row(n, 0);
        for(int i = 0; i<n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

