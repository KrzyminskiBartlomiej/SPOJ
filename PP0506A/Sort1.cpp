#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

struct solv
{
string name;
int x;
int y;
};

int main()
{
    int tests, howP;


    cin >> tests;

    for(int i=0; i<tests; i++)
    {
        cin >> howP;

        double dist[howP];
        solv point[howP];

        for(int j=0; j<howP; j++)
        {
            cin >> point[j].name;
            transform(point[j].name.begin(),point[j].name.end(),point[j].name.begin(),::toupper);
            cin >> point[j].x;
            cin >> point[j].y;

            dist[j] = sqrt(pow(point[j].x,2) + pow(point[j].y,2));
        }

         for (int k=0; k<howP; k++)
        {
            for (int l=howP-1; l>0; l--)
            {
                if (dist[l]<dist[l-1])
                {
                    swap(dist[l],dist[l-1]);
                    swap(point[l],point[l-1]);
                }
            }
            cout << point[k].name << " " << point[k].x << " " << point[k].y << endl;
         }
        cout << endl;
    }
    return 0;
}