#include <bits/stdc++.h>
using namespace std;

int countOfXs(string s, char x){
	int e = s.length();
	int no_of_x = 0;
	for (int i = 0; i < e; i++) if (s[i] == x)no_of_x++;
	return  no_of_x;
}

string lexSmallestBinaryString(string s){
    if(s == "10");
    else if(s!="10"){
        int no_of_0 = countOfXs(s, '0');
        int no_of_1 = countOfXs(s, '1');
        
        s = "";

        for (int i = 0; i < no_of_0; i++) s += '0';
        for (int i = 0; i < no_of_1; i++) s += '1';
        }
    return s;
}

int main(){
	int n;cin >> n;
    int x = n;
    while(n--){
        int t;cin >> t;
        string s;
        cin >> s;
        cout << lexSmallestBinaryString(s) << endl;
        }
	return 0;
}
