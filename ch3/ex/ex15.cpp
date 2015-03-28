//:c03:ex15.cpp

#include <iostream>
using namespace std;


#define PR(EX) cout << #EX ": " << EX << endl;

typedef struct {
  string first;
  string last;
  int num;
} Str;

int main() {
  Str s1;
  s1.first = "Pisya";
  s1.last = "Kamushkin";
  s1.num  = 13;
  PR(s1.first);
  PR(s1.last);
  PR(s1.num);
  Str *sp1 = &s1;
  sp1->first[0] = 'K';
  sp1->last[0] = 'P';
  sp1->num += 10;
  PR(sp1->first);
  PR(sp1->last);
  PR(sp1->num);
}
