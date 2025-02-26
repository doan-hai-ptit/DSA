#include <iostream>

using namespace std;

void selectionSort(int a[], int n){
	for(int i = 0; i < n; i++){
		int idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[idx]){
				idx = j;
			}
		}
		swap(a[i], a[idx]);
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[1001] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		selectionSort(a, n);
		for(int i = 0; i < n/2; i++){
			cout<<a[n-i-1] <<" "<<a[i]<<" ";
		}
		if(n%2==1) cout << a[n/2];
		cout<<"\n";
	}
	return 0;
}