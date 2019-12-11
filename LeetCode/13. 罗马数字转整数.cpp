#include "stdafx.h"


class Solution {
public:
	 int romanToInt(string s) {

		map<char, int> mapRoman;
		mapRoman['I'] = 1;
		mapRoman['V'] = 5;
		mapRoman['X'] = 10;
		mapRoman['L'] = 50;
		mapRoman['C'] = 100;
		mapRoman['D'] = 500;
		mapRoman['M'] = 1000;

		int nRet = 0;
		for (int i=0; i<s.length(); i++)
		{
			if (i + 1 == s.length())
			{
				nRet += mapRoman[s[i]];
			}
			else
			{
				if (mapRoman[s[i]] < mapRoman[s[i+1]])
				{
					nRet += mapRoman[s[i+1]] - mapRoman[s[i]];
					i++;
				}
				else
				{
					nRet += mapRoman[s[i]];
				}
			}
		}

		return nRet;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	string s = "MCMXCIV";
	int res = Solution().romanToInt(s);
	
	//getchar();
	return 0;
}