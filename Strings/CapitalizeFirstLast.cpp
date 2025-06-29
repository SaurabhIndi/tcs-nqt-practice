#include <bits/stdc++.h>
using namespace std;

string Capitalize(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == (n - 1))
        {
            str[i] = towupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i + 1] = towupper(str[i + 1]);
            str[i - 1] = towupper(str[i - 1]);
        }
    }
    return str;
}

int main()
{
    string str = "take u forward Is awesome";
    cout << Capitalize(str) << endl;
    return 0;
}