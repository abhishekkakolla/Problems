/*
Trouble spot: accidentally included another for loop with variable j for each query which wasn't needed


New stuff: Modulo operator in C++ is ^
Initializing 2d vector with empty vectors is vector<vector<int>> arr(n);

*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;



/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> ans;
    
    
    
    int lastAnswer = 0;
    int idx = 0;
    int x, y = 0;
    for (int i = 0; i < queries.size(); i++)
    {
        if (queries[i][0] == 1)
        {
            x = queries[i][1];
            y = queries[i][2];
            
            idx = (x^lastAnswer) % n;
            
            arr[idx].push_back(y);
            
            
        }
        else if (queries[i][0] == 2)
        {
            x = queries[i][1];
            y = queries[i][2];
            idx = (x^lastAnswer) % n;
            lastAnswer = arr[idx][y % (arr[idx]).size()];
            ans.push_back(lastAnswer);
            
        
            }
    }
    
    

    return ans;
}