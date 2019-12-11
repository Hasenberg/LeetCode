#include "stdafx.h"


class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* pHead = new ListNode(0);
		ListNode* pCur = pHead;
		ListNode* pTemp = NULL;
		while(l1 != NULL || l2 != NULL)
		{
			if (l1 == NULL)
			{
				pCur->next = l2;
				break;
			}
			if (l2 == NULL)
			{
				pCur->next = l1;
				break;
			}
			if (l1->val <= l2->val)
			{
				pTemp = l1;
				l1 = l1->next;
				pCur->next = pTemp;
			}
			else
			{
				pTemp = l2;
				l2 = l2->next;
				pCur->next = pTemp;
			}
			pCur = pCur->next;
		}
		pTemp = pHead;
		pHead = pHead->next;
		delete pTemp;

		return pHead;
	}
};

class Solution1 {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL)
		{
			return l2;
		}
		if (l2 == NULL)
		{
			return l1;
		}
		if (l1->val <= l2->val)
		{
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
	}
};

int a[] = {1,2,4};
int b[] = {1,3,4};

int _tmain(int argc, _TCHAR* argv[])
{
	ListNode* p1 = ArrayToListNode(a, _countof(a));
	ListNode* p2 = ArrayToListNode(b, _countof(b));
	ListNode* pR = Solution1().mergeTwoLists(p1, p2);
	
	//getchar();
	return 0;
}