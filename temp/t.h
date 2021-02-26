#ifndef MYNODE_H
#define MYNODE_H

#include <stdbool.h> 

//struct node;


typedef struct NODE{ 

   int num; 
   bool status;
// static struct NODE *this;

  void (* increaseNum)(); 
  void (* decreaseNum)(); 
  void (* statusUpdate)(); 
 //struct NODE*  (* inst)(); 


}node;

 node *createNode(); 
 node *getNode(); 

int  getnum(); 
bool getStatus();

 void nodeNumIncrease();

void nodeNumDecrease();
void nodeStatusUpdate();
//*/
static node *n;
#endif
