#include "stdafx.h"


class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		if (root == NULL)
		{
			return true;
		}
		return isMirror(root->left, root->right);
	}
	
	bool isMirror(TreeNode* left, TreeNode* right){
		if (left == NULL && right == NULL)
		{
			return true;
		}
		if (left == NULL || right == NULL)
		{
			return false;
		}
		
		return left->val == right->val &&
				isMirror(left->left, right->right) &&
				isMirror(left->right, right->left);
	}
};

class Solution1 {
public:
	bool isSymmetric(TreeNode* root) {
		if (root == NULL)
		{
			return true;
		}
		
		queue<TreeNode*> qL;
		qL.push(root->left);
		qL.push(root->right);
		while (qL.size() > 0)
		{
			TreeNode* left = qL.front();
			qL.pop();
			TreeNode* right = qL.front();
			qL.pop();
			if (left == NULL && right == NULL)
			{
				continue;
			}
			if (left == NULL || right == NULL)
			{
				return false;
			}

			if (left->val != right->val)
			{
				return false;
			}
			qL.push(left->left);
			qL.push(right->right);
			qL.push(left->right);
			qL.push(right->left);
		}
		return true;
	}
};

int a[] = {1,2,2,'#',3,'#',3};
int _tmain(int argc, _TCHAR* argv[])
{
	TreeNode* root = ArrayToTreeNode(a, _countof(a));
	int res = Solution1().isSymmetric(root);
	
	//getchar();
	return 0;
}