#include <bits/stdc++.h>
using namespace std;


double f(double x) {
    return x * x * x - 2 * x - 5;
}

double g(double x) {
    return pow(2 * x + 5, 1.0 / 3.0);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a, b, error, max_it, it = 0;

    cin >> a >> error >> max_it;

    while (it < max_it) {
        b = g(a);
        it++;
        if (fabs(b - a) < error) {
            cout << b << '\n';
            return 0;
        }
        a = b;
    }
    cout << "Error" << '\n';
    return 0;
}
