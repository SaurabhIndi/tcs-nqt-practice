#include <bits/stdc++.h>
using namespace std;

string removeSpace(char str[])
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            str[count] = str[i];
            count++;
        }
    }

    str[count] = '\0';
    return str;
}
int main()
{
    char str[] = "take u forward";
    cout << removeSpace(str) << endl;
    return 0;
}