//:C03:ex21.cpp

#include<iostream>
using namespace std;

int main() {
  string ss[10];
  ss[0] = "Мой";
  ss[1] = "дядя";
  ss[2] = "самых";
  ss[3] = "честных";
  ss[4] = "правил";
  ss[5] = "когда";
  ss[6] = "не";
  ss[7] = "в";
  ss[8] = "шутку";
  ss[9] = "занемог";

  for (int i=0; i<9; ++i)
    cout << ss[i] << " ";
  cout << ss[9] << "." << endl;
}
