//:c03:ex16.cpp

#include <iostream>
using namespace std;

#define PR(EX) cout << #EX ": " << EX << endl;

enum colors {red, orange, yellow, green, blue, indigo, violet};

int main(){
  colors c = red;
  for (int i=red; i <=violet ; ++i){
    c = (colors) i;
    PR(c);
  }
}
