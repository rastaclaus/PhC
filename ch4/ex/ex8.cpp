#include "../Stack.h"
#include <iostream>

using namespace std;

int main() {
  Stack st;
  st.initialize();
  for (int i=24; i >= 0; i--)
    st.push(new double(i/10.0));

  double* d;
  while (d = (double*)st.pop())
    cout << *d << endl;

}
