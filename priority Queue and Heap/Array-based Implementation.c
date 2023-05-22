#define MAX_HEAP 100
typedef enum {fale, true} bool;
typedef char Data;

typedef struct{
  Data data;
  int priority;
}HNode;
typedef struct{
  HNode items[MAX_HEAP+1];
  int num;
}Heap;
