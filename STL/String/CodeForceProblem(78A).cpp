#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 7, 5};
    vector<string> str;
    for (int i = 0; i < 3; i++)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;
        str.push_back(s);
    }
    int flag = 1;
    for (int j = 0; j < 3; j++)
    {
        int count = 0;
        for (auto a : str[j])
        {
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
                count++;
        }
        if (v[j] != count)
        {
            flag = 0;
            cout << "NO" << endl;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;

    return 0;
}