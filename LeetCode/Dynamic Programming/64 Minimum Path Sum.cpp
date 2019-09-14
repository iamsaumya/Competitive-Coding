class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int l = grid.size();
        int m = grid[0].size();
        
        int arr[l][m];
        for(int i=0;i<l;i++){
            for(int j=0;j<m;j++){
                arr[i][j] = INT_MAX;
            }
        }
        
        arr[0][0]=grid[0][0];
        for(int i=1;i<m;i++)
            arr[0][i] = arr[0][i-1] + grid[0][i];
        
        for(int j=1;j<l;j++)
            arr[j][0] = arr[j-1][0] + grid[j][0];
            
        for(int i=1;i<l;i++){
            for(int j=1;j<m;j++){
                arr[i][j] = min(arr[i-1][j],arr[i][j-1]) + grid[i][j];
            }
        }
            
        return arr[l-1][m-1];
    }
};