#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int ans=0;
	    string s;
	    cin>>s;
	    int n=s.size();
	    for(int i=0; i<n; i++){
	        if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')){
	            i++;
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
