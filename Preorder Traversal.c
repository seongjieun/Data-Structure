# Preorder Traversal

void Postorder(BTreeNode *root)
{
  if(root=!NULL)
  {
    printf("%d", root->item);
    preorder(root->left_child);
    preorder(root->right_child);
  }
}
