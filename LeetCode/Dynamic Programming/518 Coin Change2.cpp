class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int sizeofcoins = coins.size();
        int dp[amount+1][sizeofcoins+1];
        
        
        dp[0][0] = 1;
        
        for(int i=1;i<amount+1;i++){
            dp[i][0] = 0;
        }
        
        for(int i=1;i<sizeofcoins+1;i++){
                  dp[0][i] = 1;   
         }
        
        for(int i=1;i<amount+1;i++){
            for(int j=1; j<sizeofcoins+1;j++){
                if(i-coins[j-1]>=0){
                    dp[i][j]=dp[i][j-1] + dp[i-coins[j-1]][j];
                }
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
        
        return dp[amount][sizeofcoins];
    }
};