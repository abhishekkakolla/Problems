#include <iostream>


using namespace std;
int main()
{
    int s, r;
    cin >> s >> r;
    if (s*s > (3.14 * r*r))
    {
        cout << "SQUARE" << endl;
    }
    else
    {
        cout << "CIRCLE" << endl;
    }

    return 0;
}