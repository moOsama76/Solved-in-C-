#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){
        unsigned long long a, b;
        cin >> a >> b;
        unsigned long long x;

        if(b < a){
            x = b;
        } else {
            x = a - 1;
        }

         unsigned long long sum = x * (x+1) / 2;

         if(b >= a){
            sum++;
         }

        cout << sum << "\n";

    }



}
