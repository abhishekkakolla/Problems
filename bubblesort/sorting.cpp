#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int* nums = new int[n];
    int temp;
    int p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        nums[i] = p;
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
            
        
    }
    for (int i = 0; i<n; i++)
    {
        cout << nums[i] << endl;
    }

    





    return 0;
}