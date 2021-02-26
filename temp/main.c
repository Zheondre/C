#include <stdio.h>

#include "t.h"

int main(int argc, char *argv[]){ 

node *n = createNode();
 
//n->num = 1;
nodeNumIncrease();  
printf("Testing %d\n", getNum()); 

//n->getNum(); 
return 0; 

}
