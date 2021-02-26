#include <stdio.h>
#include <stdlib.h>

#include "t.h"
/*
int getnum(){ 

return 5 ;
}
*/
//node *n;

node* getNode(){  
  return n;
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
    n->increaseNum = nodeNumIncrease;
    n->decreaseNum = nodeNumDecrease;
    n->statusUpdate = nodeStatusUpdate;
    //n->inst = getNode(); 
    //n->this = n;
    return n; 
  }
}

//*/


