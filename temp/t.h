#ifndef MYNODE_H
#define MYNODE_H

#include <stdbool.h> 

typedef struct NODE node;

node *createNode(); 
node *getNode(); 

 void incX();
 void nodeNumIncrease(); 
 void nodeNumDecrease() ;
 void nodeStatusUpdate();
 int getNum(); 
 int getX();

/*
static void nodeNumIncrease(); 
static void nodeNumDecrease() ;
static void nodeStatusUpdate();
static int getNum(); 
static int getX(); */


//void destroyNode(node *p); 
//static node *n;
#endif
