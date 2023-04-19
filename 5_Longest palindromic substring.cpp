class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.length();
        int dp[1000][1000]={0};
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
            }  
        }
       for(int k=3;k<=n;k++){
         for (int i = 0; i < n - k + 1; ++i) {
           
            int j = i + k - 1;
 
             if (dp[i + 1][j - 1]==1 && s[i] == s[j]) {
                dp[i][j] = 1;
             }

         }
       }
        int ans=0;
        string str;
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
        
               if(dp[i][j]==1){
                    int length =j-i+1;
                    if(length>ans){
                     ans=length;
                    str = s.substr(i,j-i+1);
               }
            }
          }
        }
     return str;
    }
};
