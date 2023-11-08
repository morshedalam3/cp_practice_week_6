#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int server = 1;
	    int score_a = 0,score_b = 0;
	    for(int i = 0; i < s.length(); i++)
	    {
	        if(server && s[i] == 'A')
	        {
	            score_a++;
	        }
	        else if(!server && s[i] == 'A')
	        {
	            server = 1;
	        }
	        else if(!server && s[i] == 'B')
	        {
	            score_b++;
	        }else{
	            server = 0;
	        }
	    }
	    cout << score_a << ' ' << score_b << endl;
	}
	return 0;
}