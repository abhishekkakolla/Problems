#include <iostream>

// print staircase of size n

using namespace std;
void staircase(int n) {
    int spaces = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        cout << string(i+1, '#') << endl;
        spaces--;
        
    }
}