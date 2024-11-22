/*
Basic stack implementation of postfix notation
*/

#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int result = 0;

        for (int i = 0; i < tokens.size(); ++i)
        {
            string elem = tokens[i];
            string t1;
            string t2;
            if (elem == "+")
            {
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                result = stoi(t1) + stoi(t2);
                st.push(to_string(result));
            }
            else if (elem == "-")
            {
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                result = stoi(t2) - stoi(t1);
                st.push(to_string(result));
            }
            else if (elem == "*")
            {
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                result = stoi(t1) * stoi(t2);
                st.push(to_string(result));
            }
            else if (elem == "/")
            {
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                result = stoi(t2) / stoi(t1);
                st.push(to_string(result));
            }
            else
            {
                st.push(elem);
            }
        }
        return stoi(st.top());
        
        
    }
};
