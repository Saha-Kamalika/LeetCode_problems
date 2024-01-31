class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> answer(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
        while(!st.empty() and temperatures[i] >= temperatures[st.top()]) {
            st.pop();
        }
        if(!st.empty()) {
            answer[i]= st.top()-i;
        }
        st.push(i);
    }
    return answer;
    }
};
