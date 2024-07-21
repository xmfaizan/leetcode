class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count=0;
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total = row*col;
        int sCol = 0; int eCol = col-1;
        int sRow = 0; int eRow = row-1;
        while(total>count){
            for(int i=sCol;i<=eCol&&total>count;i++){
                ans.push_back(matrix[sRow][i]);
                count++;
                }
                sRow++;
            for(int i=sRow;i<=eRow&&total>count;i++){
                ans.push_back(matrix[i][eCol]);
                count++;
                }
                eCol--;
            for(int i=eCol;i>=sCol&&total>count;i--){
                ans.push_back(matrix[eRow][i]);
                count++;
                }
                eRow--;
            for(int i=eRow;i>=sRow&&total>count;i--){
                ans.push_back(matrix[i][sCol]);
                count++;
                }
                sCol++;            
        }
        return ans;
        
    }
};
