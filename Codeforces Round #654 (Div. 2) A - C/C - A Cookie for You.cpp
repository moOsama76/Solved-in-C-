#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){

        unsigned long long a, b, n, m;
        cin >> a >> b >> n >> m;

        if(m > min(a, b) || m + n > a + b){
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }

    }



}
