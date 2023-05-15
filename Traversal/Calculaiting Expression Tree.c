int CalculateExpTree(BTreeNode *root){
  int op1, op2;
  if(root==NULL) return 0;
  if(root->left_child==NULL&&root->right_chlid==NULL)
    return root->item;
  op1=CalculateExpTree(root->left_child);
  op2=CalculateExpTree(root->right_child);
  
  switch(root->item){
    case '+': return op1+op2;
    case '-': return op1-op2;
    case '*': return op1*op2;
    case '/': return op1/op2;
  }
  return 0;
}
