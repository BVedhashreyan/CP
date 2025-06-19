// https://codeforces.com/problemset/problem/1260/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,c,sum;
    cin >> n;

    while(n--){
        cin >> c >> sum;

        // if total number of sections needed less than availble radiator or equal
        //  than we can assign 1 section to each therefore cost is 1*1*sum(total used)
        if(c >= sum)cout<<sum<<endl;

        // else then , first assign all radiators with equal number 
        // of section then assign the remaining ; 1 for each until they complete
        // therefore ,, extra will be divided into "extra" number of radiators
        // c-extra with quotien section and extra with (quotient + 1)
        else{
            ll load = sum / c;
            ll extra = sum % c;
            ll res = (load*load)*(c-extra) + (extra)*(load+1)*(load+1);
            cout<<res<<endl;
        }
    }

    return 0;
}