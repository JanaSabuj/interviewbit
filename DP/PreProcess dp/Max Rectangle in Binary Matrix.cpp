/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int maxArea1(const vector<int>& hist, int n) {
	// 6 2 5 4 5 1 6
	stack<int> s;
	int ans = 0; // max Area

	int i = 0;
	while (i < n)
	{ // imp while loop
		/* code */
		if (s.empty() or hist[s.top()] <= hist[i]) {
			// if empty or the stack top has a smaller height, just push
			s.push(i++);// 6
		} else {
			int tp = s.top();
			s.pop();

			int tempArea = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
			ans = max(ans, tempArea);

		}
	}

	while(!s.empty()){
		int tp = s.top();
		s.pop();

		int tempArea = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
		ans = max(ans, tempArea);
	}

	return ans;


}

int maxArea(const vector<vector<int>>& vec){
	int r = vec.size();
	int c = vec[0].size();

	// int dp[r][c] = {0};
	vector<vector<int>> dp(r, vector<int>(c, 0));

	for(int j = 0; j < c; j++){
		for(int i = 0; i < r; i++){
			if(i == 0)
				dp[i][j] = vec[i][j];
			else
				dp[i][j] = (vec[i][j] == 0) ? 0 : vec[i][j] + dp[i - 1][j]; 
		}
	}

	// for (int i = 0; i < r; ++i)
	// {
	// 	/* code */

	// 	for(int j=0; j<c; j++){
	// 		cout << dp[i][j] <<" ";
	// 	}
	// 	cout <<endl;
	// }

	int ans = 0;
	for(int i = 0; i < r; i++){
		int temp = maxArea1(dp[i], dp[i].size());
		ans = max(ans,temp);
	}

	return ans ;
}

int main() {
	freopen("input.txt", "r", stdin);
   	vector<vector<int>> vec = {
   		{1,1,1},
   		{0,1,1},
   		{1,0,0}
   	};

   	cout << maxArea(vec) <<endl;


	return 0;
}


