// https://codeforces.com/problemset/problem/1473/B

// If a string u is a multiple of both s and t,
// then the length of u must be a multiple of both len(s) and len(t).
// Length of final string u = LCM(len(s), len(t))

// We repeat:
// s → LCM / len(s) times
// t → LCM / len(t) times

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll x, ll y){
    return y == 0 ? x : gcd(y,x%y);
}
ll lcm(ll x, ll y){
    return (x*y)/gcd(x,y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin >> q;

    while(q--){
        string s,t;
        cin >> s;
        cin >> t;

        ll l1 = s.length();
        ll l2 = t.length();

        ll L = lcm(l1,l2);

        string s_rep, t_rep;

        for(int i=0; i<L/l1;i++) s_rep+=s;
        for(int i=0; i<L/l2;i++) t_rep+=t;

        if(s_rep == t_rep)cout<<s_rep<<endl;
        else cout<<-1<<endl;
        
    }

    return 0;
}