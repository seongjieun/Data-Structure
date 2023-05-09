#Preorder Traversal

void Preorder(BTreeNode *root)
{
  if(root!=NULL)
  {
    printf("%d", root->item);
    Preorder(root->left_child);
    Preorder(root->right_child);
  }
}
