#include<iostream>
using namespace std;
class TreeNode{
public:
int val;
TreeNode *left=nullptr;
TreeNode *right=nullptr;
    TreeNode(int val)
    {
        this->val=val;
    }  
};
//this mtlbh jo address assign hota hae 
int size( TreeNode *root)
{
   return root==NULL?0:size(root.left)+size(root.right)+1;

}
int height(TreeNode *root)
{
    if(root==NULL){ return 0;}
    return height(root *left);
    return height(root *right);

}

int main(){
TreeNode *node =new TreeNode(10);

size(*node);
return 0;
}