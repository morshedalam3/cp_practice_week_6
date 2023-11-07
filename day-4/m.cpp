#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t){
	    int l,w;
	    cin>>l>>w;
	    int s=2*l*w;
	    if(s%4==0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    t--;
	}
	return 0;
}