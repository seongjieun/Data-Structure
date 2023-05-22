void Insert(Heap *pheap, Data data, int priority){
  HNode newNode;
  int idx=pheap->num+1;//새로 넣으려는 위치(맨끝)
  if(IsFull(pheap)) exit(1);
  //Compare the new node with its parent.
  while(idx>1){
    int parent=GetParent(idx); //부모 인덱스 찾는 법: 현재 node 나누기 2
    if(priority>pheap->items[parent].priority){
      pheap->items[idx]=pheap->items[parent];
      idx=parent;
    }
    else break;
  }
  newNode.data=data;
  newNode.priority=priority;
  
  pheap->items[idx]=newNode;
  pheap->num++;
}
  
