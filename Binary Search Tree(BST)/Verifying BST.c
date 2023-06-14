//bst
//Initailize the minimum ans maximum as INT_MIN and INT_MAX
bool Verify(BSTNode *root, int min, int max){
  if(root!=NULL){
    //Return false if this node violates the min/max constraints.
    if(root->key<=min||root->key=>max)
      return false;
    else
      //Check the subtrees with the min/max constraints.
      return Verify(root->left_child, min, root->key)&&Verify(root->right_child,root->key,max);
  }
  else
     return true; //an empty tree is BST.
}
