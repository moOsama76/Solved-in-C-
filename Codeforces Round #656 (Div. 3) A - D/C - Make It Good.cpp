#include <bits/stdc++.h>
using namespace std;

int arr[200005];


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int x, y;
        bool f1 = 0, f2 = 0;

        x = arr[n-1];

        int i;

        for(i = n - 2; i >= 0; i--)
        {

            if(!f1){
                if(arr[i] < x){
                    y = arr[i];
                    f1 = 1;
                } else {
                    x = arr[i];
                }

            } else {
                if(arr[i] > y){
                    f2 = 1;
                    break;
                } else {
                    y = arr[i];
                }
            }
        }

        if(f2)
            cout << i + 1;
        else
            cout << 0;

        puts("");



    }

}
