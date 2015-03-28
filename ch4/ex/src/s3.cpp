#include "s3.h"
#include <iostream>

using namespace std;

void S3::set(int i) {
  d = i;
}

void S3::out() {
  cout << "S3::d = " << d << endl;
}
