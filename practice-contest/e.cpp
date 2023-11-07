#include<bits/stdc++.h>
using namespace std;
#define M 1000000007

int main() {
	int t; 
	cin>>t; 
	while(t--){
	    long long int n,k,res=0,count=0,ans=1; 
	    cin>>n>>k; 
	    string s; 
	    cin>>s; 
	    for(long long int i=0; i<n; i++){
	          if(count==k && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u') res++; 
              else if(count==k && (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')){
                res++; 
                ans=(ans%M)*(res%M);
                count=0; 
                res=0;
              }
             if((s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')) count++;
	    }
	    cout<<ans%M<<endl; 
	}
	return 0;
}