#include "stdafx.h"


class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		vector<int>m(256,-1);
		int left=-1;
		int res=0;
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			left=max(left,m[s[i]]);
			m[s[i]]=i;
			res=max(res,i-left);
		}

		return res;
	}
};



int _tmain(int argc, _TCHAR* argv[])
{
	string str = "pwwkew";
	Solution().lengthOfLongestSubstring(str);
	getchar();
	return 0;
}