#include "stdafx.h"


class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
		{
			return 0;
		}
		if (root->left == NULL && root->right == NULL)
		{
			return 1;
		}

		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
	}
};

class Solution1 {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
		{
			return 0;
		}
		stack<pair<TreeNode*, int>> s;
		TreeNode* p = root;
		int maxDeep = 0;
		int deep = 0;
		while(!s.empty() || p != NULL)
		{
			while(p != NULL)
			{
				s.push(pair<TreeNode*,int>(p, ++deep));
				p = p->left;
			}
			p = s.top().first;
			deep = s.top().second;
			maxDeep = max(maxDeep, deep);
			s.pop();
			p = p->right;
		}
		return maxDeep;
	}
};

class Solution2 {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
		{
			return 0;
		}
		queue<TreeNode*> q;
		q.push(root);
		int deep = 0;
		while(!q.empty())
		{
			deep++;
			int nCnt = q.size();
			for (int i=0; i<nCnt; i++)
			{
				TreeNode* p = q.front();
				q.pop();
				if (p->left != NULL)
				{
					q.push(p->left);
				}
				if (p->right != NULL)
				{
					q.push(p->right);
				}
			}
		}
		return deep;
	}
};


int a[] = {1,2,2,'#','#',3,'#',3,'#','#',3,'#'};
int _tmain(int argc, _TCHAR* argv[])
{
	TreeNode* root = ArrayToTreeNode(a, _countof(a));
	int res = Solution().maxDepth(root);
	
	//getchar();
	return 0;
}