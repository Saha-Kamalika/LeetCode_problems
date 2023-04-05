class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j;
        for(char c: jewels)
            j.insert(c);

        int count=0;
        for(char c: stones)
            if(j.find(c)!=j.end())
                count++;
        return count;
    }
};
