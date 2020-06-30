// Link to problem : https://codeforces.com/contest/1374/problem/A

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){

        int x, y, n;
        cin >> x >> y >> n;

        if(n % x < y){
            n += (y - n % x);
            n -= x;

        } else if (n % x > y){
            n -= (n % x - y);
        }

        cout << n << "\n";
    }
}
