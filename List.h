#ifndef __LIST_H
#define __LIST_H

typedef struct Node
{
	int val;
	struct Node *pNext;
}S_Node;

void init();

void insert();


#endif
