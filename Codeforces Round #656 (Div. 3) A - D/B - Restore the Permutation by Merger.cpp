#include <bits/stdc++.h>
using namespace std;

int arr[105];
bool arr2[55];

int main()
{
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        for(int i = 1; i <= n; i++){
            arr2[i] = 0;
        }

        for(int i = 1; i <= 2*n; i++){

            cin >> arr[i];

            if(arr2[arr[i]] == 0){
                cout << arr[i] << " ";
                arr2[arr[i]] = 1;
            }
        }

        cout << "\n";


    }

}
