//Get a parent index for a given index.
int GetParent(int idx){
  return idx/2;
}

//Get a left child index for a given index.
int GetLChild(int idx){
  return idx*2;
}

//Get a right child index for a given idex.
int GetRChild(int idx){
  return idx*2+1;
}
