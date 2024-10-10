class Solution
{
private:
  void recursion(TreeNode *root, int level, vector<int> &res)
  {
    if (root == NULL)
    {
      return;
    }
    if (res.size() == level)
    {
      res.push_back(root->val);
    }
    // change the sequence of line 22 & line 23 to change the output of code from right side view to left side view
    recursion(root->right, level + 1, res);
    recursion(root->left, level + 1, res);
  }

public:
  vector<int> rightSideView(TreeNode *root)
  {
    vector<int> res;
    recursion(root, 0, res);
    return res;
  }
};