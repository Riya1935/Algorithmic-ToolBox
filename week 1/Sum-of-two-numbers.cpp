#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of_two_digits(ll first_digit, ll second_digit) {
    return first_digit + second_digit;
}

int main() {
    ll a,b;
    cin >> a>>b;
    cout << sum_of_two_digits(a, b);
    return 0;
}
