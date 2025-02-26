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
	int a[100];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	selectionSort(a, n);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}