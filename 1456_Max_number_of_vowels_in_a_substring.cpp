class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> v={'a','e','i','o','u'};
        int vc=0;
        for(int i=0;i<k;i++){
            if(v.find(s[i])!=v.end()) vc++;
        }
        int l=0,r=k-1,maxv=vc;
        while(r<s.length()-1){
            if(v.find(s[l])!=v.end()) vc--;
            l++;r++;
            if(v.find(s[r])!=v.end()) vc++;
            maxv=max(maxv,vc);
        }
        return maxv;
    }
};
//T.C = O(n)
