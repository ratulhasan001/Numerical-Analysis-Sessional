#include <bits/stdc++.h>
using namespace std;

const double error = 1.0e-15;
// const double error = 0.001;

double equation_value(double x) {
    return 4 * exp(-x) * sin(x) - 1;
    // return 4 * exp(-x) + cos(x * x) - 5;
}
void transcendental(double a, double b) {
    if(equation_value(a) * equation_value(b) >= 0) {
        cout << "Error" << '\n';
        return;
    }
    double xRoot = a;
    while((b - a) >= error) {
        xRoot = (a + b) / 2;
        if(equation_value(xRoot) == 0) break;
        else if(equation_value(xRoot) * equation_value(a) < 0) {
            b = xRoot;
        }
        else a = xRoot;
    }
    cout << "Root value : " << xRoot << '\n';
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;

    transcendental(a, b);
    
    return 0;
}