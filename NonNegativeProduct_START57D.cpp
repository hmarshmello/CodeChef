#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cd = 0;
        int flag = 0;
        int arr[n];
        for(int i = 0;i<n;i++) cin >> arr[i];
        for(int i =0; i<n;i++){
            if(arr[i]==0){
                flag = 1;
                cout<<"0\n";
                break;
            }
            else if(arr[i]<0) cd++;
        }
        if(flag==1) continue;
        else{
            if(cd%2==0) cout << "0\n";
            else cout << "1\n";
        }
    }
	return 0;
}
