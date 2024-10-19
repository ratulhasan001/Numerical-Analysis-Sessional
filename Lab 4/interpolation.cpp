#include<bits/stdc++.h>
using namespace std;

float value_of_u(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
        temp = temp * (u - i);
    return temp;
}

int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}


int main()
{
    float x[20], y[20][20];
    int n;
    cout << "Number of data: ";
    cin >> n;

    cout << "Enter x and y: " << endl;
    for(int i = 0; i < n ; i++)
    {
        cout << "x[" << i + 1 << "] & " << "y[" << i + 1 <<"] = ";
        cin >> x[i] >> y[i][0];
    }


    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }

    // cout << endl << "FORWARD DIFFERENCE TABLE" << endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cout << x[i];
    //     for(int j = 0; j < n-i ; j++)
    //     {
    //         cout << "\t" << y[i][j];
    //     }
    //     cout << endl;
    // }
    float value;
    cout << "Enter the desired value: ";
    cin >> value;

    float sum = y[0][0];
    float u = (value - x[0]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (value_of_u(u, i) * y[0][i]) / fact(i);
    }
    cout << sum << endl;
    return 0;
}