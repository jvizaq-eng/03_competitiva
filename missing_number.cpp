#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;
    long long actual_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        actual_sum += x;
    }

    cout << total_sum - actual_sum << "\n";
    return 0;
}