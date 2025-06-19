// https://codeforces.com/problemset/problem/1199/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h,l;

    cin >> h >> l;

    double ans = (l*l - h*h) / (2*h);
    cout << setprecision(10) << ans;

    return 0;
}