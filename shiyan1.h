#ifndef shiyan1_h
#define shiyan1_h


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node {
   dataType data;
   struct node *next;
} LinkList,node;

LinkList* CreateLisist();

int Size(LinkList *l);

void Insert(LinkList *l, int k, dataType x);

void Delete(LinkList *l, int k);

int Empty(LinkList *l);

dataType GetData(LinkList *l, int k);

node* Find(LinkList *l, dataType x);

void Print(LinkList *l);

void ClearList(LinkList *l); 

#endif



