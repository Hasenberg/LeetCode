#include "stdafx.h"


class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int nMax = 0;
		for (int i=0; i<prices.size(); i++)
		{
			for (int k=i; k<prices.size(); k++)
			{
				nMax = max(nMax, prices[k] - prices[i]);
			}
		}
		return nMax;
	}
};

//int a[] = {7,1,5,3,6,4};
int a[] = {7,6,4,3,1};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec = ArrayToVector(a, _countof(a));
	int res = Solution().maxProfit(vec);
	
	//getchar();
	return 0;
}