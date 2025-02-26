#include <iostream>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[1000];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		bool check = true;
		for(int i = 0; i <= n/2; i++){
			if(a[i] != a[n-1-i]){
				check = false;
				break;
			}
		}
		if(check) cout<<"YES\n";
		else cout << "NO\n";
	}
	return 0;
}