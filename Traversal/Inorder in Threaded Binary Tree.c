BTreeNode *leftMost(BTreeNode *node){
  if(node++NILL) return NULL;
  while(node->left_child!=NULL)
    node=node->left_child; //Go to the leftmost node;
  retutn node;
}

void inorder(BTreeNode *node){
  BTreeNode *cur=leftmost(node);
  while(cur!=NULL){
    printf("%d", node->item);
  // If the node is a thread node, go to its inorder successor.
  if(cur->isThreaded)
    cur=cur->right_child;
  else // Go to the leftmost child in a right subtree
    cur=leftmost(cur->right_child);
  }
}
