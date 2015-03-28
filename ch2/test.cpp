#include <vector>
#include <iostream>
#include <string>
using namespace std;


int main() {
  vector <string> v;
  v.push_back("4");
  v.push_back("ololo");
  v.push_back("3.345");
  for (int i = 0; i < v.size(); ++i)
    cout << v[i] << endl;
}
