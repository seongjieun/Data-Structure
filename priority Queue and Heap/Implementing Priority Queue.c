void InitPQueue(PQueue *ppqueue){
  InitHeap(ppqueue);
}

bool IsPQEmpty(PQueue *ppqueue){
  return IsEmpty(ppqueue);
}

bool IsPQFull(PQueue *ppqueue){
  return IsFull(ppqueue);
}

void Enqueue(PQeueu *ppqueue, Data data, int priority){
  Insert(ppqueue, data, priority);
}

Data Dequeue(PQueue *ppqueue){
  return Delete(ppqueue);
}
