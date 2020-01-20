/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>
using namespace std;

#define int long long int

int binpow(int a, int b) {
	// Base Case
	if (b == 0)
		return 1;

	int res = binpow(a, b / 2);
	if (b & 1)
		return res * res * a;
	else
		return res * res;
}

signed main() {
	freopen("input.txt", "r", stdin);
	// 5 ^ 4 in logN
	int a = 5, b = 4;
	cout << binpow(a, b) << endl;


	return 0;
}


