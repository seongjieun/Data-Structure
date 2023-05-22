//Make a heap empty.
void InitHeap(Heap *pheap){
  pheap->num=0;
}

//check whether a heap is empty.
bool IsEmpty(Heap *pheap){
  return pheap->num==0;
}

//check whether a heap is full.
bool IsFull(Heap *pheap){
  return pheap->num==MAX_HEAP;
}
