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

    map<long long, long long> map_count;

    for (auto _ : ranges::views::iota(0, N))
    {
        int a;

        cin >> a;
        map_count[a]++;
    }

    int answer = 0;

    for (const auto &mc : map_count)
    {
        if (mc.first > mc.second)
        {
            answer += mc.second;
        }
        else
        {
            answer += mc.second - mc.first;
        }
    }

    cout << answer << endl;

    return 0;
}
