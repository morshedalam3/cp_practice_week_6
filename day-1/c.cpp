#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int want = 0;
        if(x > a) want+=(x-a);
        if(y > b) want+=(y-b);
        if(want <= c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}