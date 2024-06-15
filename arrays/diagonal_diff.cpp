#include <cstdlib>
#include <iostream>
#include vector

int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0; int sum2= 0;
    int i_1 = 0; int i_2 = arr.size() -1;
    
    for (int i = 0; i < arr.size(); i++)
    {
        sum1 += arr[i][i_1];
        sum2 += arr[i][i_2];
        i_1++;
        i_2--;
    }
    // cout << sum1 << " " << sum2 << endl;
    return abs(sum2 -sum1);
}

int main()
{   
    // wrote this program in hackerrank, missing implementation
    
    return 0;
}