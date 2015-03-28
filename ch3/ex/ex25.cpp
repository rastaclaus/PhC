//:C03:ex25.cpp

#include "printBinary1.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  while (true){
    float fn;
    cin >> fn;
    unsigned int *pfn=reinterpret_cast<unsigned int*>(&fn);
    printBinary(*pfn);
    cout << endl;
  }
}

