#include "stdafx.h"


class Solution {
public:
	bool isValid(string s) {
		if (s.size() == 0)
		{
			return true;
		}
		map<char, char> mapMatch;
		mapMatch['('] = ')';
		mapMatch['['] = ']';
		mapMatch['{'] = '}';

		stack<char> stackMatch;
		for (int i=0; i<s.size(); i++)
		{
			if (stackMatch.size() == 0)
			{
				stackMatch.push(s[i]);
			}
			else
			{
				char cPre = stackMatch.top();
				if (mapMatch[cPre] != s[i])
				{
					stackMatch.push(s[i]);
				}
				else
				{
					stackMatch.pop();
				}
			}
		}

		return stackMatch.size() == 0;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	string s = "";
	bool res = Solution().isValid(s);
	
	//getchar();
	return 0;
}