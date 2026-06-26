class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c : s){
            if(c == ')' and !st.empty() and  st.top() == '(') st.pop();
            else if(c == '}' and !st.empty() and st.top() == '{') st.pop();
            else if(c == ']' and !st.empty() and st.top() == '[') st.pop();
            else st.push(c);
        }
        return st.size() == 0;
    }
};
