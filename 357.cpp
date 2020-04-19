int jisuan(int n)
{
	int re = 1;
	for(int i = 0; i < n; i++){
		if(i == 0)
			re *= 9;
		else if(i <= 9)
			re *= (10 - i);
		else
			break;
	}
	return re;
}

int countNumberWithUniqueDidits(int n)
{
	vector<int> dp(1,1);
	dp.emplace_back(10);
	int time = 2;
	while(n >=time){
		dp.emplace_back(dp[time - 1] + jisuan(time));
		time++;
	}
	return dp[n];
}
