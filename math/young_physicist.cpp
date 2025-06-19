// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    vector<ll>x_cord;
    vector<ll>y_cord;
    vector<ll>z_cord;

    for(ll i = 0; i<n; i++){
        ll x,y,z;
        cin >> x >> y >> z;
       
        x_cord.push_back(x);
        y_cord.push_back(y);
        z_cord.push_back(z);
    }
    
    int x_sum = accumulate(x_cord.begin(),x_cord.end(),0);
    int y_sum = accumulate(y_cord.begin(),y_cord.end(),0);
    int z_sum = accumulate(z_cord.begin(),z_cord.end(),0);

    if(x_sum == 0 && y_sum == 0 && z_sum == 0)cout << "YES";
    else cout<<"NO";

    return 0;
}