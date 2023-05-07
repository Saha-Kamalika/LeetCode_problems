class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen=s.length();
        int tlen=t.length();
        if(slen>tlen) return false;
        int s_ptr=0,t_ptr=0;
        while(s_ptr<slen && t_ptr<tlen){
            if(s[s_ptr]==t[t_ptr]){
                ++s_ptr;
            }
            ++t_ptr;
        }
        return s_ptr==slen;
    }
};
