#ifndef STRUCT24_H
#define STRUCT24_H

struct struct24 {
  void initialise(int i = 0);
  int d1;
  struct24 * s1;
};

struct24 * initList(struct24* s, int size);
void printList(struct24 * s);

#endif
