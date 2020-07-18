#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(x == z && x >= y || x == y && x >= z || y == z && y >= x){
            cout << "YES\n";
            cout << max(x, max(y, z)) << " " << min(x, min(y, z)) << " " << min(x, min(y, z)) << "\n";
        } else {
            cout << "NO\n";
        }
    }

}
