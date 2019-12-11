#include "stdafx.h"


class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack.length() < needle.length())
		{
			return -1;
		}
		if (needle.length() == 0)
		{
			return 0;
		}

		for (int i=0; i<haystack.length(); i++)
		{
			if (haystack[i] == needle[0])
			{
				bool bMatch = true;
				for (int k=0; k<needle.length(); k++)
				{
					if (haystack[i+k] != needle[k])
					{
						bMatch = false;
						break;;
					}
				}
				if (bMatch)
				{
					return i;
				}
			}
		}

		return -1;
	}
};

class Solution1 {
public:
	vector<int> getnext(string str)
	{
		int len=str.size();
		vector<int> next;
		next.push_back(-1);//next数组初值为-1
		int j=0,k=-1;
		while(j<len-1)
		{
			if(k==-1||str[j]==str[k])//str[j]后缀 str[k]前缀
			{
				j++;
				k++;
				next.push_back(k);
			}
			else
			{
				k=next[k];
			}
		}
		return next;
	}
	int strStr(string haystack, string needle) {
		if(needle.empty())
			return 0;

		int i=0;//源串
		int j=0;//子串
		int len1=haystack.size();
		int len2=needle.size();
		vector<int> next;
		next=getnext(needle);
		while((i<len1)&&(j<len2))
		{
			if((j==-1)||(haystack[i]==needle[j]))
			{
				i++;
				j++;
			}
			else
			{
				j=next[j];//获取下一次匹配的位置
			}
		}
		if(j==len2)
			return i-j;

		return -1;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	string haystack = "mississippi";
	string needle = "issip";
	int res = Solution1().strStr(haystack, needle);
	
	//getchar();
	return 0;
}