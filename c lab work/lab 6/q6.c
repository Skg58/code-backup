/*What is self- referential structure? Explain through example.*/
  /* Ans - if a structure contains one or more than one pointer which points to same type of structure is konwn as self-referntial sturcture. */
#include <stdio.h>
// single link of self- referential structure.
/*struct node
{
  int d1;            // d1 = data 1
  int d2;            // d2 = data 2
  struct node *link; // ptr point same structure
};

int main()
{
  struct node s1 = {10, 20, NULL};
  struct node s2 = {30, 40, NULL};
  struct node s3 = {50, 60, NULL};
  s1.link = &s2;
  s2.link = &s3;
  printf("%d\n", s1.link->d1);
  printf("%d\n", s1.link->d2);
  printf("%d\n", s2.link->d1);
  printf("%d\n", s2.link->d2);
  printf("%d\n", s1.link->link->d2);

  return 0;
}*/

// multiple  link ofself- referential structure

struct node
{
  struct node *link1;
  int d1; // d1 = data 1
  struct node *link2;
};

int main()
{
  struct node s1 = {NULL, 20, NULL};
  struct node s2 = {NULL, 40, NULL};
  struct node s3 = {NULL, 60, NULL};
  s2.link1 = &s1;
  s2.link2 = &s3;
  printf("the value of d1 in\n");
  printf("s1 is %d\n", s2.link1->d1);
  printf("s2 is %d\n", s2.d1);
  printf("s3 is %d", s2.link2->d1);

  return 0;
}