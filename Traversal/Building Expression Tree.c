BTreeNode* MakeExpTree(char* exp, int len){
  Stack stack;
  BTreeNode *node, *right_node, *left_node;
  
  InitStack(&stack);
  for(int i=0; i<len; i++){
    if('0'<=exp[i]&&exp[i]<=9) //exp에 공백 없음, 숫자면 stack에 넣기
      node=CreateNode(exp[i]);
    else{ //연산자 만났을 때
      right_node=Peek(&stack),Pop(&stack);
      left_node=Peek(&stack),Pop(&stack);
      
      node=CreateNode(exp[i]); //연산자를 root node로 만드는 것
      CreateRightSubtree(node, right_node);
      CreateLeftSubtree(node, left_node);
    }
    Push(&stack, node);
  }
  return Peek(&stack);
}
