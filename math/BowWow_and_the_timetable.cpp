// https://codeforces.com/problemset/problem/1204/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string b;
    cin >> b;

    int len = b.length();
    bool oneMore1 = false;

    for(int i = 1; i<len; i++){
        if(b[i] == '1'){
            oneMore1 = true;
            break;
        }
    }

    int k = len / 2;
    if ((len % 2 != 0) && oneMore1)
        k++;
    
    cout << k << endl;
    return 0;
}