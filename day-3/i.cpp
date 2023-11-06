#include<bits/stdc++.h>
using namespace std;

bool cond(pair<char,int>a,pair<char,int>b){
    return (a.first>b.first);
}

 int main(){

    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;
        int n=s.size();
        int p;              cin>>p;

        vector<pair<char,int>> v;
        int cost=0;
        for(int i=0;i<=n-1;i++)
        {
            v.push_back({s[i],i});
            cost+=(s[i]-96);
        }

        vector<int> Indxs(n+1,0);

        sort(v.begin(),v.end(),cond);

        for(auto i:v){
            if(cost<=p)break;
            cost-=(i.first-96);
            Indxs[i.second]=-1;
        }
    for(int i=0;i<=n-1;i++){
            if(Indxs[i]!=-1){
                cout<<s[i];
            }
        }cout<<endl;
    }
    return 0;
}
