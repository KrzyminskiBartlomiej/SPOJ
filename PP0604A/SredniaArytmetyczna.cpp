#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tests, digits[100];
    float numbers, summary=0, distance, average;

    cin >> tests;

    for(int i=0; i<tests; i++)
    {
        cin >> numbers;

        for(int j=0; j<numbers; j++)
        {
            cin >> digits[j];
            summary += digits[j];
        }

        average = summary / numbers;

        distance = fabs(average - digits[0]);

        float minDistance = distance;
        int index = 0;
        for(int k=0; k<numbers; k++) {
            distance = fabs(average - digits[k]);
            if(distance < minDistance) {
                minDistance = distance;
                index = k;
            }
        }

        cout << digits[index] << endl;

        summary = 0;
    }
    return 0;
}