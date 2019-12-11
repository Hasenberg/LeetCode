// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// C++Test.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

// TODO: �� STDAFX.H ��
// �����κ�����ĸ���ͷ�ļ����������ڴ��ļ�������


ListNode* ArrayToListNode(int ary[], int count)
{ 
	if (count == 0)
	{
		return NULL;
	}
	ListNode* lR = new ListNode(ary[0]);
	ListNode* lHead = lR;
	for (int i = 1; i < count; i++)
	{
		lR->next = new ListNode(ary[i]);
		lR = lR->next;
	}
	lR->next = NULL;
	return lHead;
}

void PrintList(ListNode* pList)
{
	do 
	{
		printf("%d,", pList->val);
		pList = pList->next;
	} while (pList != NULL);
	printf("\n");
}

vector<int> ArrayToVector(int ary[], int count)
{
	vector<int> vecRes;
	for (int i = 0; i < count; i++)
	{
		vecRes.push_back(ary[i]);
	}

	return vecRes;
}

TreeNode* ArrayToTreeNode(int ary[], int count, int nStart)
{
	if (nStart >= count || ary[nStart] == '#')
	{
		return NULL;
	}
	TreeNode* root = new TreeNode(ary[nStart]);
	int nLeft = nStart * 2 + 1;
	int nRight = nStart * 2 + 2;
	if (nLeft < count)
	{
		root->left = ArrayToTreeNode(ary, count, nLeft);
	}
	if (nRight < count)
	{
		root->right = ArrayToTreeNode(ary, count, nRight);
	}
	return root;
}

TreeNode* ArrayToTreeNode(int ary[], int count)
{ 
	if (count == 0)
	{
		return NULL;
	}
	return ArrayToTreeNode(ary, count, 0);
}

