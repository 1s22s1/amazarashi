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

    int N, K;
    cin >> N >> K;

    map<int, int> A;

    for (auto i : ranges::views::iota(0, N))
    {
        int a;
        cin >> a;

        A[a] += 1;
    }

    vector<pair<int, int>> vec(A.begin(), A.end());
    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
         { return a.second > b.second; });

    int answer = 0;

    for (int i = K; i < vec.size(); i++)
    {
        answer += vec.at(i).second;
    }

    cout << answer << endl;

    return 0;
}
