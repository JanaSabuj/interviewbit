/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>
using namespace std;

#define int long long int

int binpow(int a, int b, int m) {
	a = a % m;
	int res = 1;
	while (b) {
		if (b & 1)
			res = res * a % m;// L to R precedence in case of equality
		a = a * a % m;
		b >>= 1;
	}

	return res;
}

signed main() {
	freopen("input.txt", "r", stdin);
	int a = 5, b = 4, m = 1000000007;
	cout << binpow(a, b, m) << endl;


	return 0;
}


