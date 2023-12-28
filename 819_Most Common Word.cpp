class Solution {
public:
    unordered_map<string,int>mp;
    unordered_set<string>st;  //for storing the banned word
    string mostCommonWord(string para, vector<string>& banned) {
        string str="";
        for(int i=0;i<para.length();i++)
        {
            if(para[i]>='A' and para[i]<='Z')
            {
                char temp=tolower(para[i]);
                str=str+temp;
            }
            else str=str+para[i];
        }
        int idx=0;
        string word="";
        vector<string>s;
        while(true)
        {
            if(idx>=str.length())
            {
                if(word.length()>0)
                {
                    mp[word]++;
                    s.push_back(word);
                }
                break;
            }
            
            if(str[idx]>='a' and str[idx]<='z')
            {
                word=word+str[idx];
                idx++;
            }
            else   
            {
                mp[word]++;
                s.push_back(word);
                word="";
                
                while(idx<str.length() and !(str[idx]>='a' and str[idx]<='z'))
                {
                    idx++;
                }
            }
        }
        for(int i=0;i<banned.size();i++)
        {
            st.insert(banned[i]);
        }

        int count=INT_MIN;
        string ans="";
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>count and st.find(it->first)==st.end())
            {
                ans=it->first;
                count=it->second;
            }
        }
        return ans;
    }
};
