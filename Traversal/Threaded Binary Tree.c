typedef int BData;
typedef struct _bTreeNode{
  BData item;
  struct _bTreeNode *left_child;
  struct _bTreeNode *right_child;
  bool isThreaded;
}BTreeNode;
