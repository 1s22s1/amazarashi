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

    int n;
    cin >> n;

    vector<map<char, int>> vec;

    for (auto _ : ranges::views::iota(0, n))
    {
        map<char, int> count_map;
        for (char c = 'a'; c <= 'z'; c++)
        {
            count_map[c] = 0;
        }

        string S;
        cin >> S;

        for (auto c : S)
        {
            count_map[c]++;
        }

        vec.push_back(count_map);
    }

    string answer = "";

    for (char c = 'a'; c <= 'z'; c++)
    {
        int count = 50;

        for (auto cp : vec)
        {
            count = min(count, cp[c]);
        }

        for (auto i : ranges::views::iota(0, count))
        {
            answer += c;
        }
    }

    cout << answer << endl;

    return 0;
}
