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

    int N, M;

    cin >> N >> M;

    set<int> s;
    for (auto i : ranges::views::iota(1, M + 1))
    {
        s.insert(i);
    }

    for (auto i : ranges::views::iota(0, N))
    {
        int K;
        cin >> K;

        set<int> t;
        for (auto i : ranges::views::iota(0, K))
        {
            int a;
            cin >> a;

            t.insert(a);
        }

        set<int> cap;
        set_intersection(s.begin(), s.end(), t.begin(), t.end(), inserter(cap, cap.begin()));
        s = cap;
    }

    cout << s.size() << endl;

    return 0;
}
