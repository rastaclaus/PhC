#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "CppLib.h"
#include "../../../require.h"

using namespace std;

Stash* read_five(ifstream& in){
  string line;
  Stash* stringStash = new Stash;
  const int bufsize = 80;
  stringStash->initialize(sizeof(char) * bufsize);
  int count  = 0;
  while (getline(in,line) && count++ < 5){
    stringStash->add(line.c_str());
  }
  if (count == 0)
    return 0;
  return stringStash;
}

int main() {
  ifstream in("makefile");
  assure(in, "makefile");

  Stack stack;
  Stash* stash = 0;

  stack.initialize();
  while ((stash = read_five(in))!=0){
    stack.push(stash);
  }

  Stack fl;
  fl.initialize();
  while ((stash = (Stash*)stack.pop())!=0){
    fl.push(stash);
  }
  stack.cleanup();

  while ((stash = (Stash*)fl.pop())!=0){
    for (int i=0; i < stash->count(); ++i)
      cout << (char*)stash->fetch(i) << endl;
    stash->cleanup();
  }
  fl.cleanup();
}
