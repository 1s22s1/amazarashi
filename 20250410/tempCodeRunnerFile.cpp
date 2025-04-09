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

    set<string> set;

    for (auto _ : ranges::views::iota(0, N))
    {
        string s;
        cin >> s;

        set.insert(s);
    }

    cout << set.size() << endl;

    return 0;
}
