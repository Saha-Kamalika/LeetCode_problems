class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int st=0,currC=0,maxL=0;
        for(int en=0;en<n;en++){
            currC+=abs(s[en]-t[en]);
            while(currC>maxCost){
                currC-=abs(s[st]-t[st]);
                ++st;
            }
            maxL=max(maxL,en-st+1);
        }
        return maxL;
    }
};
