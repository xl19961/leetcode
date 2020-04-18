#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rediction(vector<int> num1, vector<int> num2)
{
	vector<int> re;
	sort(num1.begin(), num1.end());
	sort(num2.begin(), num2.end());
	auto p1 = num1.begin(), p2 = num2.begin();
	while(p1 != num1.end() && p2 != num2.end()){
		if(*p1 < *p2){
			p1++;
		}else if( *p1 == *p2){
			if(re.empty() || re.back() != *p1)
				re.push_back(*p1);
			p1++;
			p2++;
		}else{
			p2++;
		}
	}
	return re;
}

int main()
{
	vector<int> t1 = {1,2,5,7,9,5,3,1};
	vector<int> t2 = {1,4,2,5,6,8,3,12};
	vector<int> re;
	re = rediction(t1, t2);
	for(auto p : re)
		cout << p << endl;
	return 1;
}
