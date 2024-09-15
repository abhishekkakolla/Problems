/*
Mistakes: not having base cases so it was wonky, have 1 or 2 and run the recursive func on a higher level
Missed a few hidden test cases

*/

/*
PROBLEM: 
for a process k, that node has k processes.
i.e. 
node 1 has 2
node 2 has 3 4
node 3 has 5 6 7 
node 4 has 8 9 10 11 ...

for int processNumber, return the parent processNumber, ex: func(6) returns 3
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'findParent' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER processNumber as parameter.
 */

void recurse(int level, int recentProcessNumber, int target, int* ans)
{
    cout << "progress: ";
    for (int i = 0; i < level; i++)
    {
        cout << recentProcessNumber << " ";
        
        if (recentProcessNumber == target) 
        {
            *ans = level;
            return;
        }
        recentProcessNumber++;
    }
    
    recurse(level+1, recentProcessNumber, target, ans);
    
}

int findParent(int processNumber) {
    // find process # of parent of input
    /*
    1 - 2 
    2 - 3 4
    3 - 5 6 7
    4 - 8 9 10 11
    5 - 12 13 14 15 16
    6 - ...
    incrementing by only 1
    */
    
    // base cases
    int ans = 0;
    if (processNumber == 2) return 1;
    recurse(3, 5, processNumber, &ans);
    // cout << ans;
    
    return ans;
}

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string processNumber_temp;
//     getline(cin, processNumber_temp);

//     int processNumber = stoi(ltrim(rtrim(processNumber_temp)));

//     int result = findParent(processNumber);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
