#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin >> t;
	while(t--){
	    cin>>a>>b;
	    if(a==1 or b == 1) cout << "No" << endl;
	    else{
	        if(a%2==1 && b%2==1) cout<<"No"<<endl;
	        else cout <<"Yes"<<endl;
	    }
	}
	return 0;
}
