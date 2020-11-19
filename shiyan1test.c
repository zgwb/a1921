
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "shiyan1.h"

int main() {
   LinkList *list = CreateLisist();
   Insert(list, 1,10);
   Insert(list, 1,20);
   Delete(list, 2);
   Insert(list, 1, 30);
   Insert(list, 1, 40);
   printf("链表的元素个数为：%d\n",Size(list));
   Print(list);
   printf("链表的第2个元素为: %d",GetData(list, 2));
   system ("pause");


#define n 11
#define m 3


   int k = 0;
   node *p, *q, *r;
   p = q = (node*)malloc(sizeof(node));
   p -> data = 1;
   for (int i=2; i<=n; i++){
      r = (node*)malloc(sizeof(node));
      r->data = i;
      q->next = r;
      q = r;
  }
   q->next = p;

   q = p;
   while (q->next != q) {
      k++;
      if (k ==m ) {
         p->next = q->next;
	 free(q);
	 q = p->next;
	 k = 0;
      } else {
	 p = q;
	 q = q->next;
      }
	p->next = q->next;
	free(q);
	q = p->next;
   }
   printf("最后一个获胜者的编号是： %d\n",q->data);
}
