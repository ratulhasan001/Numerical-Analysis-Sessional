#include <bits/stdc++.h>
using namespace std;
const double error = 0.0001;


double f(double x) {
    return x * sin(x) + cos(x);
}

double g(double x) {
    return x * cos(x);
}

void newton_raphson(double x) {
    if(g(x) == 0) {
        cout << "error" << '\n';
        return;
    }
    double value = f(x) / g(x);
    while(abs(value) >= error) {
        value = f(x) / g(x);
        x = x - value;
    }
    cout << fixed << setprecision(3) << x << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x;
    cin >> x;
    newton_raphson(x);
    
    return 0;
}