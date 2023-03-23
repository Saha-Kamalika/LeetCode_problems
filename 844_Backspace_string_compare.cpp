class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(char c: s)
            if(c!='#')
                s1.push(c);
            else{
                if(!s1.empty())
                    s1.pop();
            }
        for(char c: t)
            if(c!='#')
                s2.push(c);
            else{
                if(!s2.empty())
                    s2.pop();
            }
        while(!s1.empty() && !s2.empty()){
            char c1=s1.top();
            s1.pop();
            char c2=s2.top();
            s2.pop();
            if(c1!=c2)
                return false;
        }
        if(!s1.empty() || !s2.empty())
            return false;
        return true;
    }
};
