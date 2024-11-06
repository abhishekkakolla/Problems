/*
First try using STL stack
Def not the most efficient
*/


#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 1) return false;
        stack<char> stack;
        char rn;
        int stack_length = 0; 
        int openings = 0; // opening brackets
        int closings = 0; // closing brackets
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
                stack_length++;
                openings++;
            }

            if (stack_length == 0) return false;

            if (s[i] == ')')
            {
                rn = stack.top();
                stack.pop();
                stack_length--;
                if (rn != '(') return false;
                closings++;
            }
            if (s[i] == '}')
            {
                rn = stack.top();
                stack.pop();
                stack_length--;
                if (rn != '{') return false;
                closings++;
            }
            if (s[i] == ']')
            {
                rn = stack.top();
                stack.pop();
                stack_length--;
                if (rn != '[') return false;
                closings++;
            }

            
        }
        cout << stack_length << closings << endl;
        if (openings != closings) return false;
        return true;

        
        
    }
};
