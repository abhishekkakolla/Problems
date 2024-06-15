#include <iostream>


using namespace std;
int main()
{

    int n;
    cin >> n;
    int a;
    int b;
    int p;

    int* correct = new int[n];

    for (int i = 0; i < n; i++)
    {
        
        if (a * b == p)
        {
            correct[i] = 1;
        }
        else
        {
            correct[i] = 0;
        }
    }

    for (int i =0; i < n; i ++)
    {
        if (correct[i] == 0)
        {
            cout << "16 BIT S/W ONLY" << endl;
        }
        else
        {
            cout << "POSSIBLE DOUBLE SIGMA" << endl;
        }
    }





    return 0;
}