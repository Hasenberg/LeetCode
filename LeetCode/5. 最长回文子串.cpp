#include "stdafx.h"


class Solution {
public:
	string longestPalindrome(string s) {

		if (s.length() <= 1)
		{
			return s;
		}

		for (int i=0; i<s.length(); i++)
		{

		}

		return res;
	};

	int valid(string s, int nPos)
	{
		int nLen = 1;


		return true;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	string s = "babad";
	string res = Solution().longestPalindrome(s);
	getchar();
	return 0;
}