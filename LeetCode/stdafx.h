// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
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

// TODO: 在此处引用程序需要的其他头文件
