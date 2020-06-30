// Link to problem : https://codeforces.com/contest/1374/problem/D


#include <bits/stdc++.h>
using namespace std;

long long arr[200005];
int main()
{
    int t;
    cin >> t;

    while(t--){

        map <int, long long> req;
        long long n, k, mx = 0;
        cin >> n >> k;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            arr[i] %= k;
            req[arr[i]] = 0;

        }

        for(int i = 0; i < n; i++){
            if(arr[i] % k){
                if(req[arr[i]] + k - arr[i] % k > mx){
                    mx = req[arr[i]] + k - arr[i] % k;

                }
                req[arr[i]] += k;
            }

        }

        if(!mx)
            cout << mx;

        else
            cout << mx+1;

        puts("");

    }
}
