#include <iostream>
#include <iomanip>
using namespace std;

#define PR(X) \
  cout << setw(30) << left << #X " = " << right << X << endl;

int main() {
  cout.setf(ios::right);
  PR(sizeof(char));
  PR(sizeof(wchar_t));
  PR(sizeof(signed char));
  PR(sizeof(short int));
  PR(sizeof(int));
  PR(sizeof(long int));
  PR(sizeof(unsigned char));
  PR(sizeof(unsigned short int));
  PR(sizeof(unsigned int));
  PR(sizeof(unsigned long int));
  PR(sizeof(float));
  PR(sizeof(double));
  PR(sizeof(long double));
  PR(sizeof(bool));
}

