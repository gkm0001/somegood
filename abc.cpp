#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if (t == 2 || t == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if (t == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
    }

    vector<int> ans;
    if (t % 2 == 0)
    {
        int an1 = t;
        while (t != 0)
        {
            ans.push_back(t);
            t = t - 2;
        }
        an1 = an1 - 1;
        while (an1 > 0)
        {
            ans.push_back(an1);
            an1 = an1 - 2;
        }
    }

    else if (t % 2 != 0)
    {
        int an = t - 1;
        while (an != 0)
        {
            ans.push_back(an);
            an = an - 2;
        }
        while (t > 0)
        {
            ans.push_back(t);
            t = t - 2;
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}