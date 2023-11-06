#include<bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z,sum;
	    cin>>x>>y>>z;
	    sum=(x+y+z);
	    if(sum>1){
	        cout<<"Not now"<<endl;
	    }
	    else{
	        cout<<"Water filling time"<<endl;
	    }
	}
	return 0;
}