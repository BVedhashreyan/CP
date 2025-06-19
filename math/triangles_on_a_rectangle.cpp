// https://codeforces.com/contest/1620/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        ll w,h;
        cin >> w >> h;

        ll horz_base = 0, vert_base = 0;

        for(int i=0; i<4; i++){
            ll k;
            cin >> k;
            vector<ll>arr;
            for(ll j = 0; j<k; j++){
                ll x;
                cin >> x;
                arr.push_back(x);
            }
            if(i<2){
                horz_base = max(horz_base, arr.back() - arr.front());
            }else{
                vert_base = max(vert_base, arr.back() - arr.front());
            }
        }
        cout << max(horz_base*h, vert_base*w)<<endl;
    }

    return 0;
}