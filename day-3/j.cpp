#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
    string a; cin >> a;
    ll i,j, mn = 0, x;
    for(i = 0; i < k; i++){
        if(a[i] == 'W') mn++;
    }
    x = mn;
    for(i = 0, j = k; j < n; j++, i++){
        if(a[j] == 'W') x++;
        if(a[i] == 'W') x--;
        if(x < mn) mn = x;
    }
    cout << mn << endl;
    }
   
   return 0;
}