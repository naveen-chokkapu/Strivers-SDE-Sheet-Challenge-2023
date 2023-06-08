#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

void fun(BinaryTreeNode<int> *root,vector<int> &t,int p) {
    if(!root) return;
    if(p==2) t.push_back(root->data);
    fun(root->left,t,p);
    if(p==1) t.push_back(root->data);
    fun(root->right,t,p);
    if(p==3) t.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> t;
    fun(root,t,1); // inorder
    ans.push_back(t);

    t.clear();
    fun(root,t,2); // preorder
    ans.push_back(t);

    t.clear();
    fun(root,t,3); // post order
    ans.push_back(t);

    return ans;
}