/*
1. Choose a and b so that f(a)*f(b) < 0
2. set x = (a * f(b) - b * f(a)) / (f(b) - f(a)))
3. f(a) * f(x) < 0 root lies in (a, x) set b = x
4. f(a) * f(x) > 0 root lies in (x, b) set a = x
*/

#include <bits/stdc++.h>
using namespace std;

const double error = 0.0005;
const int it = 1000;
// const double error = 0.001;

double equation_value(double x) {
    // return x * x * x - 2 * x - 5;
    return x - exp(-x);
}
void false_position_method(double a, double b) {
    if(equation_value(a) * equation_value(b) >= 0) {
        cout << "Error" << '\n';
        return;
    }
    double xRoot = a; 
    for(int i = 0; i < it; i++) {
        xRoot = (a * equation_value(b) - b * equation_value(a)) / (equation_value(b) - equation_value(a));
        if(abs(equation_value(xRoot)) < error) break;
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

    false_position_method(a, b);
    
    return 0;
}