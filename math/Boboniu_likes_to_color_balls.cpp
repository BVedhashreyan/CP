// https://codeforces.com/problemset/problem/1395/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int r, int g, int b, int w){
    return r%2 + g%2 + b%2 + w%2 > 1 ? false : true; 
}

// here it counts number of odds
// int check(int r, int g, int b, int w){
//     return r%2 + g%2 + b%2 + w%2; 
// }

// possible combos 
// 4 even - ok ,rem(0)
// 3even 1 odd - ok,, rem(1)
// 2 even , 2odd - never rem(2)
// 1even 3 odd - if rgb are >0 then possble (rem 3)
// 4 odd if rgb are > 0 then possible rem(4)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        ll r,g,b,w;
        cin >> r >> g >> b >> w;

        // tutorial version
        if(check(r,g,b,w))cout << "YES" << endl;
        else if(r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+3)) cout << "YES" << endl;
        else cout<<"NO"<<endl;

        // my version
        // int rem = check(r,g,b,w);
        // if(rem == 0 || rem == 1){
        //     cout << "YES" << endl;
        // }else if((rem == 3 || rem == 4) && (r>0 && g>0 && b>0)){
        //     cout << "YES" << endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }
    }

    return 0;
}