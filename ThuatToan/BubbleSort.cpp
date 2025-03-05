#include <iostream>

using namespace std;

void BubbleSort(int a[], int n){
	for(int i = 0; i < n-1; i++){
		bool flag = false;
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j +1]){
				swap(a[j], a[j+1]);
				flag = true;
			}
		}
		if(flag== false) break;
	}
}

int main(){
	int n; cin >> n;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	BubbleSort(a, n);
	for(int i = 0; i < n; i++) cout << a[i] <<" ";
	return 0;
}