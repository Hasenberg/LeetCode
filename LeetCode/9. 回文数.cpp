#include "stdafx.h"


class Solution {
public:
	bool isPalindrome(int x) {
		if(x < 0 || (x % 10 == 0 && x != 0))
			return false;

		int nReverse = 0;
		while (nReverse < x)
		{
			nReverse = nReverse * 10 + x % 10;
			x /= 10;
		}

		return x == nReverse || x == nReverse / 10;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 10;
	int res = Solution().isPalindrome(x);
	
	//getchar();
	return 0;
}