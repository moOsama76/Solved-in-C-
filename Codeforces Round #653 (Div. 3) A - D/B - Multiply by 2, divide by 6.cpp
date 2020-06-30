#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){

        int n, steps = 0;
        cin >> n;

        while(n > 1){

            if(n % 6 == 0){
                n /= 6;

            } else {
                n *= 2;

            }

            steps++;
        }

        if(n == 1){
            cout << steps;

        } else {
            cout << -1;

        }
        puts(""); // cout << endl;
    }
}
