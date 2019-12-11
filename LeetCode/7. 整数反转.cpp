#include "stdafx.h"


class Solution {
public:
	int reverse(int x) {
		int nRet = 0;
		while (x != 0)
		{
			if (nRet > INT_MAX/10 || (nRet == INT_MAX / 10 && (x % 10) > 7)) return 0;
			if (nRet < INT_MIN/10 || (nRet == INT_MIN / 10 && (x % 10) < -8)) return 0;

			nRet *= 10;
			nRet += x % 10;
			x /= 10;
		}

		return nRet;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	int x = -321;
	int res = Solution().reverse(x);
	
	//getchar();
	return 0;
}