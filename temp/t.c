#include <stdio.h>
#include <stdlib.h>

#include "t.h"

 struct NODE{ 

  int num; 
  bool status;
  int x; 

/*   void (* increaseNum)(); 
  void (* decreaseNum)(); 
  void (* statusUpdate)(); 
  void (* incX)();
*/
 //struct NODE*  (* inst)(); 

};

static node *n;

node* getNode(){  
  return n;
}

 void incX(){ 
n->x++;
}  

 int getNum(){ 
return n->num; 
}
 int getX(){ 
return n->x;
}

 void nodeNumIncrease(){ 
  n->num++; 
}
 void nodeNumDecrease(){ 
  n->num--;
}
 void nodeStatusUpdate(){

if(n->status) 
  n->status = false; 
 else 
   n->status = true; 
}  

node *createNode() { 
  
  if(n) 
    return n; 
  else { 
    n = (node*)malloc(sizeof(node)); 
    
    n->num = -1; 
    n->status = false;
    n->x = 87; 

/* 
    n->incX = incX;
    n->increaseNum = nodeNumIncrease;
    n->decreaseNum = nodeNumDecrease;
    n->statusUpdate = nodeStatusUpdate;
*/
    return n; 
  }
}


