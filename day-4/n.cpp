#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int N,K,L;
        cin>>N>>K>>L;

        vector<pair<int,int>>songDetails;
        for(int i =0;i<N;i++){
            int d,l;
            cin>>d>>l;
            songDetails.push_back(make_pair(d,l));
        }
        vector<int>pleng;

        for(auto &pair:songDetails){
            if(pair.second==L){
                pleng.push_back(pair.first);
            }
        }
        if(pleng.size() < K){
            cout<<-1<<endl;
        }
        else{
            sort(pleng.begin(),pleng.end(),compare);
            int ans=0;
            for(int i =0;i<K;i++){
                ans+=pleng[i];
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}