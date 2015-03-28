//:C03:ex07.cpp

#include <iostream>
using namespace std;

void func1(string *s){
  *s+="_f1 owned";
}

void func2(string &s){
  s+="_f2 owned";
}

int main() {
  string s = "ololo, hello";
  cout << s << endl;
  func1(&s);
  cout << s << endl;
  func2(s);
  cout << s << endl;
}
