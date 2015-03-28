#include "s3.h"
#include <iostream>

using namespace std;

void S3::set(int i) {
  this->d = i;
}

void S3::out() {
  cout << "S3::d = " << this->d << endl;
}
