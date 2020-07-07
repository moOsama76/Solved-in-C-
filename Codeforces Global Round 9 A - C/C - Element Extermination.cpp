#include <iostream>
using namespace std;

int arr[300001];
int main()
{
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool isThereGreater = 0;

        for(int i = n-2; i >= 0; i--){

            if(arr[i] > arr[n-1]){
               isThereGreater = 1;
            }

            if(isThereGreater && arr[i] < arr[n-1]){
                isThereGreater = 0;
            }
        }

        if(isThereGreater){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
