#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N;
    cin >> N;

    set<string> S;

    for (auto i : ranges::views::iota(1, N + 1))
    {
        string name;
        cin >> name;

        if (S.contains(name))
        {
            // Do nothing
        }
        else
        {
            cout << i << endl;

            S.insert(name);
        }
    }

    return 0;
}
