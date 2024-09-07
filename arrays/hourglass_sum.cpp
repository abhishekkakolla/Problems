#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
    vector<int> sums;

    int curr_sum = 0;
    for (int r = 0; r < arr.size(); r++)
    {
        for (int c = 0; c < arr[r].size(); c++)
        {
            // hourglass valid if fits these conditions
            // hard coded, since array will be 6x6
            if (r+2 <= 5 && c+2 <= 5)
            {
                for (int i = r; i < r+3; i++)
                {
                    for (int j = c; j < c+3; j++)
                    {
                        curr_sum += arr[i][j];
                    }
                }
                curr_sum -= (arr[r+1][c] + arr[r+1][c+2]);
                sums.push_back(curr_sum);
                curr_sum = 0;
            }
            
            
        }
    }
    
    int largest = sums[0];
    for (int i = 0; i < sums.size(); i++)
    {
       if (largest < sums[i]) largest = sums[i];
    }
    
    return largest;
}