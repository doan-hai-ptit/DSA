#include <iostream>

using namespace std;

string SequentialSearch(int a[], int n, int k){
	for(int i = 0; i < n; i++){
		if(a[i] == k) return "YES";
	}
	return "NO";
}

int main(){
	int n, k, a[100]; cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	cout<<SequentialSearch(a, n, k);
	return 0;
}