#include <bits/stdc++.h>
using namespace std;

int mat[301][301];

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        bool can = 1;
        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if(i == 0 || i == n-1)
                {
                    if((j == 0 || j == m-1))
                    {
                        if(mat[i][j] <= 2)
                            mat[i][j] = 2;
                        else
                        {
                            can = 0;
                        }
                    }
                    else
                    {
                        if(mat[i][j] <= 3)
                            mat[i][j] = 3;
                        else
                        {
                            can = 0;
                        }
                    }
                }
                else
                {
                    if(j != 0 && j != m-1 ){
                        if(mat[i][j] <= 4)
                            mat[i][j] = 4;
                        else
                        {
                            can = 0;
                        }
                    } else {
                        if(mat[i][j] <= 3)
                            mat[i][j] = 3;
                        else
                        {
                            can = 0;
                        }
                    }
                }
            }

        }


        if(can)
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    cout << mat[i][j] << " ";
                }
                puts("");
            }

            puts("");

        } else {
            cout << "NO\n";
        }
    }
}
