#include <iostream>
using namespace std;

class testcl1 {
  int i;
  void pi();
protected:
  int j;
  void pj();
public:
  int k;
  void pk();
};

void testcl1::pi(){
  cout << "pi()" << " called." << endl;
}

void testcl1::pj(){
  cout << "pi()" << " called." << endl;
}

void testcl1::pk(){
  cout << "pk()" << " called." << endl;
}

int main() {
  testcl1 t;
  //t.pi();
  //t.pj();
  t.pk();
}
