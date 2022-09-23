#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int a = 0;a < t;a++){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int plus = 0, minus = 0, dig = 0;
	    int d[10] = {0};
	    for(int i = 0; i< n;i++){
	        if(s[i] == '+'){
	            plus++;
	        }
	        else if(s[i]=='-'){
	            minus++;
	        }
	        else{
	            d[s[i]-'0']++;
	            dig++;
	        }
	    }
	    string ans = "";
	    int i = 9;
	    while(dig-(plus+minus)){
	        if(d[i] == 0){ 
	            i--;
	            continue;
	        }
	        ans += ('0'+i);
	        d[i]--;
	        dig--;
	    }
    	while(plus){
    	    if(d[i] == 0){
    	        i--;
    	        continue;
    	    }
    	    ans += '+';
    	    ans += ('0'+i);
    	    d[i]--;
    	    plus--;
    	}
    	while(minus){
    	    if(d[i]==0){
    	        i--;
    	        continue;
    	    }
    	    ans += '-';
    	    ans += ('0'+i);
    	    d[i]--;
    	    minus--;
    	}
    	cout<<ans;
    	cout<<"\n";
	}
	return 0;
}
