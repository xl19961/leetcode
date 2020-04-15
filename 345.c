#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseVowels(string s){
	string tar = "aeiou";
	vector<int> dp;
	for(int i = 0; i < s.size(); i++){
		if(tar.find(s[i]) != tar.npos)
			dp.push_back(i);
	}
	for(int i = 0; i < dp.size() / 2;i++){
		char tmp = s[dp[i]];
		s[dp[i]] = s[dp[dp.size() - i - 1]];
		s[dp[dp.size() - i - 1]] = tmp;
	}
	return s;
}
int main()
{
	string s;
	cin >> s;
	cout << reverseVowels(s) << endl ;
	return 1;
}	
