#include <iostream>
#include <math.h>
using namespace std;

int result(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) { 
            if (i % 2 == 0) count++; 
            if ((n / i) % 2 == 0 && i * i != n) count++;
        }
    }
    return count;
}


int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int r = result(n);
		cout << r <<"\n";
	}
	return 0;
}