#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int a[n], b[n], as = 0, os=0, mo=0, ma=0;
	    for(int i=0; i < n; i++){
	        cin >> a[i];
	        
	    }
	    
	    for(int i=0; i < n; i++){
	        cin >> b[i];
	        
	    }
	    
	    for(int i=0; i < n; i++){
	        
	        if(a[i]>0){
	            os++;
	        }
	        else{
	            os = 0;
	        }
	        
	        if(b[i]>0){
	            as++;
	        }
	        else{
	            as = 0;
	        }
	        
	        ma = max(ma, as);
	        mo = max(mo, os);
	        
	    }
	    if(ma>mo){
	        cout << "addy" << endl;
	    }
	    else if(ma<mo){
	        cout << "om" << endl;
	    }
	    else{
	        cout << "draw" << endl;
	    }
	    
	    
	    
	}
	return 0;
}