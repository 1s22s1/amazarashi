#include <bits/stdc++.h>

using namespace std;

#define endl '\n';
#define ll long long

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    ll N;
    cin >> N;

    map<ll, ll> count_map;
    for (auto _ : ranges::views::iota(0, N))
    {
        ll A;
        cin >> A;

        count_map[A]++;
    }

    ll answer = N * (N - 1) / 2;

    for (const auto &cp : count_map)
    {
        answer -= cp.second * (cp.second - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
