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

    long long N;
    cin >> N;

    map<long long, long long> count_map;

    for (auto i : ranges::views::iota(0, N))
    {
        long long A;
        cin >> A;

        count_map[A]++;
    }

    long long answer = N * (N - 1) / 2;

    for (const auto &cp : count_map)
    {
        answer -= cp.second * (cp.second - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
