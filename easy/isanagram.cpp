#include <string>
#include <iostream>

class Solution {
public:
    bool isAnagram(string s, string t) {
        return freqCalculation(s) == freqCalculation(t);

    }

    int freqCalculation(string str)
    {
        int result = 1;
        for (int i = 0; i < str.length(); i++)
        {
            result *= str[i] % 26;
        }
        return result;
    }
};
