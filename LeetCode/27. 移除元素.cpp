#include "stdafx.h"


class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		auto itor = nums.begin();
		while(itor != nums.end())
		{
			if (*itor == val)
			{
				itor = nums.erase(itor);
			}
			else
			{
				itor++;
			}
		}

		return nums.size();
	}
};

class Solution1 {
public:
	int removeElement(vector<int>& nums, int val) {
		int nLeft = 0, nRight = 0;
		for (; nRight<nums.size(); nRight++)
		{
			if (nums[nRight] != val)
			{
				nums[nLeft] = nums[nRight];
				nLeft++;
			}
		}

		return nLeft;
	}
};


int a[] = {0,0,1,1,1,2,2,3,3,4};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> nums = ArrayToVector(a, _countof(a));
	int res = Solution1().removeElement(nums, 1);
	
	//getchar();
	return 0;
}