#include <iostream>
#include <string>
#include "incap.h"

using namespace std;

void incap::initialise() {
  sp = new Stack;
  sp->initialize();
}

void incap::readFile(ifstream& fin){
  Stash *st;
  while ((st = readN(fin, 5))!=0){
    sp->push(static_cast<void*>(st));
  }
}

void incap::printFile() {
  Stack * buff = new Stack;
  buff->initialize();

  void * vp;
  Stash *st;

  while((vp = sp->pop())!=0)
    buff->push(vp);
  while ((st = static_cast<Stash*>(buff->pop()))!=0) {
    for (int i=0; i < st->count();++i)
      cout << static_cast<char*>(st->fetch(i)) << endl;
  }
}

Stash* readN(ifstream& fin, int n){
  string line;
  const int bufsize = 80;

  Stash *stringStash = new Stash;
  stringStash->initialize(sizeof(char) * bufsize);

  int count  = 0;
  while (getline(fin,line) && count++ < n){
    stringStash->add(line.c_str());
  }
  if (count == 0)
    return 0;
  return stringStash;
}
