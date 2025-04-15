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

    map<string, int> S;

    for (auto _ : ranges::views::iota(0, N))
    {
        string s;
        cin >> s;

        S[s] += 1;
    }

    auto max_it = *max_element(S.begin(), S.end(), [](const auto &a, const auto &b)
                               { return a.second < b.second; });

    vector<string> filtered;
    for (const auto &pair : S)
    {
        if (pair.second == max_it.second)
        {
            filtered.push_back(pair.first);
        }
    }

    sort(filtered.begin(), filtered.end());

    for (const auto &name : filtered)
    {
        cout << name << endl;
    }

    return 0;
}
