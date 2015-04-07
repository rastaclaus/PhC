#ifndef INKAP_H
#define INKAP_H

#include "Stack.h"
#include "CppLib.h"
#include <fstream>

struct incap{
  void readFile(std::ifstream& fin);
  void printFile();
  void initialise();
  Stack* sp;
};

Stash* readN(std::ifstream& fin, int n);

#endif


