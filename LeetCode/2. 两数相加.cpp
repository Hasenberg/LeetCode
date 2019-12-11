
#include "stdafx.h"

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* lR = new ListNode(0);
		ListNode* lHead = lR;
		bool bAdapt = false;
		while(true)
		{
			if (l1 == NULL && l2 == NULL)
			{
				lR->next = NULL;
				break;
			}
			if (l1 != NULL)
			{
				lR->val += l1->val;
			}
			if (l2 != NULL)
			{
				lR->val += l2->val;
			}
			bAdapt = lR->val / 10;
			lR->val %= 10;
			if (l1 != NULL)
			{
				l1 = l1->next;
			}
			if (l2 != NULL)
			{
				l2 = l2->next;
			}
			if (l1 == NULL && l2 == NULL && !bAdapt)
			{
				lR->next = NULL;
				break;
			}

			lR->next = new ListNode(bAdapt);
			lR = lR->next;
		}
		return lHead;
	}
};

int ary1[] = {5};
int ary2[] = {5};

int _tmain(int argc, _TCHAR* argv[])
{
	ListNode* l1 = ArrayToListNode(ary1, _countof(ary1));
	ListNode* l2 = ArrayToListNode(ary2, _countof(ary2));
	ListNode* lR = Solution().addTwoNumbers(l1, l2);
	PrintList(l1);
	PrintList(l2);
	PrintList(lR);

	getchar();
	return 0;
}

