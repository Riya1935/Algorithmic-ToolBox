#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MaxPairwiseProduct(const std::vector<int>& numbers) {
    ll max_product;
    ll n = numbers.size();
    max_product=v[n-1]*v[n-2];
    return max_product;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    cout << MaxPairwiseProduct(numbers)<<endl;
    return 0;
}
