class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(string s : tokens){
            if(s == "+" or s == "-" or s == "*" or s == "/"){
                int op1 = stoi(st.top());
                st.pop();
                int op2 = stoi(st.top());
                st.pop();
                int res;
                if(s == "+") res = op1 + op2;
                else if( s == "-") res = op2 - op1;
                else if(s == "*") res = op1 * op2;
                else res = op2/op1;

                st.push(to_string(res));
            }
            else st.push(s);
        }

        return stoi(st.top());
    }
};
