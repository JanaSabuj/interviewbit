// https://practice.geeksforgeeks.org/problems/stickler-theif/0
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int sol(const vector<int>& vec) {
	int n = vec.size();

	if (n == 1)
		return vec[0];
	if (n == 2)
		return vec[1];

	int max1 = vec[0];
	int max2 = vec[1];


	for (int i = 2; i < n; ++i)
	{
		/* code */
		int val = max1 + vec[i];
		max1 = max(max1, max2);
		max2 = val;
	}

	return max(max1,max2);


}

int main() {
	// freopen("input.txt", "r", stdin);
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> vec(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> vec[i];
		}

		cout << sol(vec) << endl;
	}






	return 0;
}


