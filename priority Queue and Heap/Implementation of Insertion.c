void Insert(Heap *pheap, Data data, int priority){
  HNode newNode;
  int idx=pheap->num+1;//
  if(IsFull(pheap)) exit(1);
  //Compare the new node with its parent.
  while(idx>1){
    int parent=GetParent(idx);
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
  
