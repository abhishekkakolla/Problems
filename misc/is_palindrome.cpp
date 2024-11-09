#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        // only consider alphanumeric & conv to lowercase (could find a better way later)
        for (int i= 0;i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 122 || (s[i] >= 48 && s[i] <= 57)) new_s += tolower(s[i]);
        }
        cout << new_s << endl;

        // two pointers
        int i = 0;
        int j = new_s.length() -1;
        for (i, j; i < j; i++, j--)
        {
            if (new_s[i] != new_s[j]) return false;
        }
        return true;
    }
};
