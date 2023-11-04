#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        ll n, i; cin >> n;
    ll a[n], b[n];
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++) cin >> b[i];
    for(i = 0; i < n; i++){
        if(i == 0) cout << b[i] - a[i]<< " ";
        else{
            ll mx = max(a[i], b[i-1]);
            cout << b[i] - mx << " ";
        }
    }
    cout << endl;
    }

}