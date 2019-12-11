#include "stdafx.h"


class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string res;
		if (strs.size() == 0)
		{
			return res;
		}
		string str0 = strs[0];
		int nRight = 0;
		for (int i=0; i<str0.size(); i++)
		{
			for (int k=1; k<strs.size(); k++)
			{
				if (i >= strs[k].size() || strs[0][i] != strs[k][i])
				{
					return res;
				}
			}
			res = str0.substr(0, i+1);
		}

		return res;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("aflow");
	strs.push_back("bflight");
	string res = Solution().longestCommonPrefix(strs);
	
	//getchar();
	return 0;
}