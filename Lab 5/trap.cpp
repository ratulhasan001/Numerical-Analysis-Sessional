#include <bits/stdc++.h>
using namespace std;

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
    h /= 2;

    double sum = y[0] + y[n - 1];
    for(int i = 1; i < n - 1; i++) {
        sum += 2 * y[i];
    }
    ans = h * sum;
    cout << ans << '\n';

    return 0;
}