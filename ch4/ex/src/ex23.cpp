#include "incap.h"
#include <iostream>
#include "../../../require.h"
using namespace std;
int main(){
  incap ink;
  ink.initialise();
  ifstream ins("makefile");
  assure(ins,"makefile");
  ink.readFile(ins);
  ink.printFile();
}
