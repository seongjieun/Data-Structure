Data Delete(Heap *pheap){
  Data max=pheap->items[1].data; // root node 접근(배열의 1번 index니까)
  HNode last = pheap->items[pheap->num]; //last node 접근
  int parent=1, child;
  //Compare the root with its child nodes.
  while(child=GetHighPriorityChild(pheap, parent)){ //자식 중에 큰 값을 가져온다는 함수
    if(last.priority<pheap->items[child].priority){ // 자식이 있을 때까지만 (or 부모가 클 때까지만) 실행
      pheap->items[parent]=pheap->items[child];
      parent=child;
    }
    else break;
  }
  pheap->items[parent]=last;
  pheap->num--;
  return max;
}
