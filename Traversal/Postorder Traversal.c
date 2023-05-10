#Postorder Traversal (LRC)

void Postorder(BTreeNode* root)
{
    if (root != NULL)
    {
      Postorder(root->left_child); 
      Postorder(root->right_child);
       printf("%d ", root->item);
    }
}
