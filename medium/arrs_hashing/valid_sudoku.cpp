/*
Solved it without looking at soln,
prob could've used maps
*/

#include <queue>
#include <string>
using namespace std;
#include <vector>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(10, vector<int> (10, 0));
        vector<vector<int>> cols(10, vector<int> (10, 0));
        vector<vector<int>> grids(10, vector<int> (10, 0));
        char val;
        for (int r = 0; r < board.size(); ++r)
        {
            for (int c = 0; c < board[r].size(); ++c)
            {
                val = board[r][c];
                if (val != '.')
                {
                    int num = val - '0';
                    rows[r][num]++;
                    cols[c][num]++;
                    grids[(r/3)*3+c/3][num]++;

                    if (rows[r][num] > 1 || cols[c][num] > 1 || grids[(r / 3) * 3 + (c / 3)][num] > 1)
                    return false;
                }
            }
        }

        return true;
    }
};
