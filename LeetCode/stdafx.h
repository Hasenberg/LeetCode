// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include <stdio.h>
#include <tchar.h>
#include<iostream>
#include<vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

ListNode* ArrayToListNode(int ary[], int count);
void PrintList(ListNode* pList);

vector<int> ArrayToVector(int ary[], int count);

TreeNode* ArrayToTreeNode(int ary[], int count);

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
