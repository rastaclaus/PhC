#include "../../Stack.h"
#include "Video.h"
#include <iostream>
#include <sstream>

using namespace std;


string itos(int i) {
  ostringstream ost;
  ost << i;
  return ost.str();
}

int main() {
  Stack s;
  s.initialize();
  for (int i = 0; i < 100; ++i) {
    Video *vp = new Video;
    string t = "title_" + itos(i);
    string a = "annotation_" + itos(i);
    vp->initialise(t, a);
    s.push((void*)vp);
  }
  Video* v;
  while ((v = (Video*)s.pop())!=0) {
    v->print();
  }
}
