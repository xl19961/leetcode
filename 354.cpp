#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxEn(vector<vector<int>> num)
{
	if(num.empty())
		return 0;
	sort(num.begin(), num.end(), [](const auto &a, const auto $b){
			return (a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]));
	});
	vector<int> dp;
	for(auto& en : num){
		int id = lower_bound(dp.begin(), dp.end()) - dp.begin();
		if(idx >= dp.size())
			dp.emplace_back(en[1]);
		else
			dp[idx] = en[1];
	}
	return dp.size();
}


