class Solution {
public:
int ti[1001][1001];
    bool isSubsequence(string s, string t) {
        int slen=s.length();
       /* int tlen=t.length();
        if(slen>tlen) return false;
        int s_ptr=0,t_ptr=0;
        while(s_ptr<slen && t_ptr<tlen){
            if(s[s_ptr]==t[t_ptr]){
                ++s_ptr;
            }
            ++t_ptr;
        }*/
        return LCS(s,t)==slen;
    }
    
    int LCS(string a,string b){
        int m=a.length();
        int n=b.length();
        for(int i=0;i>m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0) ti[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(a[i-1]==b[j-1]) ti[i][j]=1+ti[i-1][j-1];
                else ti[i][j]=max(ti[i][j-1],ti[i-1][j]);
            }
        }
        return ti[m][n];
    }
};
