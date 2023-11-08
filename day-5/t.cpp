#include<bits/stdc++.h>
using namespace std;

int main() {

	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,o=0,e=0;
	    cin>>n>>k;
	    if(n%2==0)
	    {
	        o=n/2;
	        e=n/2;
	    }
	    else
	    {
	        o=(n/2)+1;
	        e=n/2;
	    }
	    if(n>=2*k)
	    {
	        long long int j=o-k;
	        if(j%2==0 && j>=0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}