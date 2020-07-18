#include <bits/stdc++.h>
using namespace std;


int bestHalf(string s, char c, int cnt, int siz){

    if(siz == 0)
        return cnt;

    int first = 0, second = 0;

    // To work one based
    string s1 = ".", s2 = ".";

    for(int i = 1; i <= siz / 2; i++){

        if(s[i] == c)
            first++;

        s1 += s[i];
    }

    for(int i = siz / 2 + 1; i <= siz; i++){

        if(s[i] == c)
            second++;

        s2 += s[i];
    }

    int path1 = bestHalf(s2, c + 1, cnt + siz / 2 - first, siz / 2);
    int path2 = bestHalf(s1, c + 1, cnt + siz / 2 - second, siz / 2);

    return min(path1, path2);
}

int main()
{
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        string s = ".";

        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            s += c;
        }

        cout << bestHalf(s, 'a', 0, n) + 1 << "\n";

    }

}
