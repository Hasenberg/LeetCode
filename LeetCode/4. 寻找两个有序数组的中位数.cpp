#include "stdafx.h"


class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		int nSize1 = nums1.size();
		int nSize2 = nums2.size();
		int nTotal = nSize1 + nSize2;
		if (nSize1 == 0)
		{
			return (float)(nums2.at(nSize2/2) + nums2.at(nSize2/2 - 1)) / 2.0;
		}
		if (nSize2 == 0)
		{
			return (float)(nums1.at(nSize1/2) + nums1.at(nSize1/2 - 1)) / 2.0;
		}
		if (nTotal & 1 == 1)
		{
			return find_kth(nums1, 0, nums2, 0, nTotal/2 + 1);
		}
		else
		{
			return (find_kth(nums1, 0, nums2, 0, nTotal/2) + find_kth(nums1, 0, nums2, 0, nTotal/2 + 1)) / 2.0;
		}
	}

	// 寻找两个数组中第k个数字
	double find_kth(vector<int>& nums1, int begin1, vector<int>& nums2, int begin2, int k)
	{
		if (begin1 >= nums1.size())
		{
			return nums2.at(begin2 + k - 1);
		}
		if (begin2 >= nums2.size())
		{
			return nums1.at(begin1 + k - 1);
		}
		if (k == 1)
		{
			return min(nums1.at(begin1), nums2.at(begin2));
		}
		int mid1 = 0, mid2 = 0;
		if (begin1 + k/2 - 1 < nums1.size())
		{
			mid1 = nums1.at(begin1 + k/2 -1);
		}
		if (begin2 + k/2 - 1 < nums2.size())
		{
			mid2 = nums2.at(begin2 + k/2 -1);
		}
		if (mid1 < mid2)
		{
			return find_kth(nums1, begin1 + k/2, nums2, begin2, k-k/2);
		}
		else
		{
			return find_kth(nums1, begin1, nums2, begin2+k/2, k-k/2);
		}
	}
};

int a[]= { 2,3, 5 };
int b[] = { 1,4,7, 9 };

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> num1, num2;
	for (int i=0; i<_countof(a); i++)
	{
		num1.push_back(a[i]);
	}
	for (int i=0; i<_countof(b); i++)
	{
		num2.push_back(b[i]);
	}
	double dResult = Solution().findMedianSortedArrays(num1, num2);
	getchar();
	return 0;
}