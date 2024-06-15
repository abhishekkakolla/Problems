#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "a";
    int ismirrored[20];
    int i = 0;

    while (str != "  ")
    {
        getline(cin, str);
        if (str == "pq" || str == "qp" || str == "db" || str == "bd")
        {
            ismirrored[i] = 1;
        }
        else
        {
            ismirrored[i] = 0;
        }
        i++;
    }

    // output
    cout << "Ready" << endl;
    for (int j = 0; j < i-1; j ++)
    {
        if (ismirrored[j] == 0)
        {
            cout << "Ordinary pair" << endl;
        }
        else if (ismirrored[j] == 1)
        {
            cout << "Mirrored pair" << endl;
        }
    }

    return 0;
}