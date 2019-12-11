#include "stdafx.h"


class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		set<int> setNums;
		auto itor = nums.begin();
		while(itor != nums.end())
		{
			if (setNums.find(*itor) != setNums.end())
			{
				itor = nums.erase(itor);
			}
			else
			{
				setNums.insert(*itor);
				itor++;
			}
		}

		return nums.size();
	}
};

class Solution1 {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
		{
			return 0;
		}
		int nLeft = 0, nRight = 1;
		for (; nRight<nums.size(); nRight++)
		{
			if (nums[nLeft] != nums[nRight])
			{
				nLeft++;
				nums[nLeft] = nums[nRight];
			}
		}

		return nLeft + 1;
	}
};


int a[] = {0,0,1,1,1,2,2,3,3,4};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> nums = ArrayToVector(a, _countof(a));
	int res = Solution1().removeDuplicates(nums);
	
	//getchar();
	return 0;
}