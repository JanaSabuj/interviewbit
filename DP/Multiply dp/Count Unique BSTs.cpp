/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int uniqueBST(int n){
	vector<int> catalan(n + 1, 0);
	catalan[0] = 1;
	catalan[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = i - 1; j >= 0; j--){
			catalan[i] += catalan[j] * catalan[i - j - 1];
		}
	}

	return catalan[n];
}

signed main() {
	// freopen("input.txt", "r", stdin);
	int A = 18;
	cout << uniqueBST(A) <<endl;


	return 0;
}


