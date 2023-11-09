lass Solution {
public:
    int t[1001][1001];
    int LCS(string &x,string &y,int m,int n){
        if(m==0 || n==0) return 0;
        if(t[m][n]!=-1) return t[m][n];
        if(x[m-1]==y[n-1]) return t[m][n]=1+LCS(x,y,m-1,n-1);
        else return t[m][n]=max(LCS(x,y,m-1,n),LCS(x,y,m,n-1));
    }
    string shortestCommonSupersequence(string str1, string str2) {
        memset(t,-1,sizeof(t));
        int m=str1.length();
        int n=str2.length();
        LCS(str1,str2,m,n);
        string ans="";
        int i=m;
        int j=n;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(t[i-1][j]>t[i][j-1]){
                ans.push_back(str1[i-1]);
                i--;
            }
            else{
                ans.push_back(str2[j-1]);
                j--;
            }
        }
        while(i>0){
            ans.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            ans.push_back(str2[j-1]);
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
