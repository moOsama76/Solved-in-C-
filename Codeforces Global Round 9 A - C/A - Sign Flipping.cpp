#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main()
{
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        bool f = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(f){
                arr[i] = abs(arr[i]);
                f = 0;
            } else {
                arr[i] = -abs(arr[i]);
                f = 1;
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

        puts("");
    }
}
