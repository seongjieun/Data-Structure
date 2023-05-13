#Levelorder traversal

void Levelorder(BTreeNode *root){
  Queue queue;
  if (root==NULL) return;
  
  InitQueue(&queue);
  EnQueue(&queue, root);
  while (!IsEmpty(&queue))
  {
    root=Peek(&queue);
    DeQueue(&queue);
    
    printf("%d", root->item);
    if (root->left_child!=NULL)
      EnQueue(&queue, root->left_child);
    if (root->right_child!=NULL)
      EnQueue(&queue, root->right_child);
  }
}
