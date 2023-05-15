//Make use of postorder traversal

int CalDirectorySize(BTreeNode *root){
  int left_size, right_size;
  if(root=NULL) return 0;
  else{
    left_size=CalDirectorySize(root->left_child);
    right_size=CalDirectorySize(root->right_child);
    return (root->item+left_size+right_size);
  }
}
