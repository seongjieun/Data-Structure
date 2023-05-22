//자식들 중 큰 값을 가져오는 함수
int GetHighPriorityChild(Heap *pheap, int idx){
  if(GetLChild(idx)>pheap->num) //No child  nodes exits.
    return 0;
  else if (GetLChild(idx)==pheap->num) //Exist a left child only.
    return GetLChild(idx);
  else{ //Choose a child node with the highest priority.
    int left = GetLChild(idx), right=GetRChild(idx);
    if(pheap->items[left].priority>pheap->items[right].priority)
      return left;
    else
      return right;
  }
}
