#include <bits/stdc++.h>
using namespace std;
using ll = long long;




int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    double x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double ans = 0;

    double h = abs(x[1] - x[0]);
    h /= 3;

    double sum = y[0] + y[n - 1], sum_of_even = 0, sum_of_odd = 0;
    for(int i = 1; i < n - 1; i += 2) {
        sum_of_odd += y[i];
    }
    sum_of_odd *= 4;
    for(int i = 2; i < n - 1; i += 2) {
        sum_of_even += y[i];
    }
    sum_of_even *= 2;
    sum = sum + sum_of_even + sum_of_odd;
    ans = h * sum;
    cout << ans << '\n';

    return 0;
}