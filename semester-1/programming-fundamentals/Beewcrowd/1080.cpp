#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int maximum = 0;
    int position = 0;

    for(int i = 1; i <= 100; i++)
    {
        cin >> num;

        if(num > maximum)
        {
            maximum = num;
            position = i;
        }
    }

    cout << maximum << endl;
    cout << position << endl;

    return 0;
}