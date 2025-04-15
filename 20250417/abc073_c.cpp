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

    set<int> S;

    for (auto _ : ranges::views::iota(0, N))
    {
        int A;
        cin >> A;

        if (S.contains(A))
        {
            S.erase(A);
        }
        else
        {
            S.insert(A);
        }
    }

    cout << S.size() << endl;

    return 0;
}
