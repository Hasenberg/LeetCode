#include "stdafx.h"


class Solution {
public:
	int maxSubArray(vector<int>& nums) {

		int nMax = INT_MIN;
		for (int i=0; i<nums.size(); i++)
		{
			int sum = 0;
			for (int k=i; k<nums.size(); k++)
			{
				sum += nums[k];
				nMax = max(nMax, sum);
			}
		}

		return nMax;
	}
};

class Solution1 {
public:
	int maxSubArray(vector<int>& nums) {

		int nMax = INT_MIN;
		int nPreSum = 0;
		for (int i=0; i<nums.size(); i++)
		{
			nPreSum = max(nPreSum + nums[i], nums[i]);
			nMax = max(nMax, nPreSum);
		}

		return nMax;
	}
};

class Solution2 {
public:
	int maxSubArray(vector<int>& nums) {

		int nMax = INT_MIN;
		int nSum = 0;
		for (int i=0; i<nums.size(); i++)
		{
			nSum += nums[i];
			nMax = max(nMax, nSum);
			if (nSum < 0)
			{
				nSum = 0;
			}
		}

		return nMax;
	}
};


int a[] = {-2,1,-3,4,-1,2,1,-5,4};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> nums = ArrayToVector(a, _countof(a));
	int res = Solution2().maxSubArray(nums);
	
	//getchar();
	return 0;
}