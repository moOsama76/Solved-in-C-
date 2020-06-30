#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){

        int n, openinig = 0;
        string s;
        cin >> n >> s;

        for(int i = 0; i < n; i++){

            if(s[i] == '('){
                openinig++;

            } else if(s[i] == ')' && openinig){
                openinig--;

            }
        }
        cout << openinig << "\n";
    }
}
