void HeapSort(Data a[], int n){
  Heap heap;
  InitHeap(&heap);
  
  //Insert all elements to the heap.
  for(int i=0;i<n;i++)
    Insert(&heap, a[i], a[i]);
  
  //Remove all elements from the heap.
  for(int i=n-1;i>=0;i--)
    a[i]=Delete(&heap);
}
