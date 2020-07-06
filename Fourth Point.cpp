#include <bits/stdc++.h>
using namespace std;

struct point
{
    double x, y;
};

point p[4], repeatedP, otherP;

int main()
{
    while( scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y, &p[3].x, &p[3].y) == 8)
    {
        for(int i = 0; i < 4; i++)
        {

            for(int j = i+1; j < 4; j++)
            {

                if(p[i].x == p[j].x && p[i].y == p[j].y)
                {
                    repeatedP.x = p[i].x;
                    repeatedP.y = p[i].y;
                }
            }

        }

        for(int i = 0; i < 4; i++)
        {

            if(p[i].x != repeatedP.x || p[i].y != repeatedP.y)
            {
                otherP.x = p[i].x;
                otherP.y = p[i].y;
            }

        }

        for(int i = 0; i < 4; i++)
        {

            if((p[i].x != repeatedP.x || p[i].y != repeatedP.y) && (p[i].x != otherP.x || p[i].y != otherP.y))
            {
                printf("%0.3f %0.3f\n", otherP.x - repeatedP.x + p[i].x, otherP.y - repeatedP.y + p[i].y);
            }

        }
    }
}
