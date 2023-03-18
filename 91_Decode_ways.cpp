class Solution {
public:
    int numDecodings(string s) {
        if(s.length()<1)
            return 0;
        if(s[0]=='0')  //invalid encoded form
            return 0;
        if(s.length()==1) //encoded form b/w 1-9
            return 1;

        int v1=1,v2=1;
        for(int i=1;i<s.length();i++){
            int d1=s[i]-'0';
            int d2=(s[i-1]-'0')*10+d1;
            int val=0;

            if(d1>=1)
                val+=v2;
            
            if(d2>=10 && d2<=26)
                val+=v1;

            v1=v2;
            v2=val;
        }
        return v2;
    }
};
