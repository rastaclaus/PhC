#include <iostream>
using namespace std;


char* c_read(const char* arr, int arr_size) {
  char * result = new char [arr_size+1];
  for (int i=0; i <= arr_size; ++i) {
    result[i] = arr[i];
  }
  return result;
}

int main() {
  const char* hehe = "jopa";
  char* res1 = c_read(hehe, 4);
  cout << hehe << endl;
  cout << res1 << ", it's all, folks!"<< endl;
  char* res2 = c_read(res1, 4);
  cout << res2 << ", it's all, folks!"<< endl;
  cout << static_cast<void*>(res1) << ", " << static_cast<void*>(res2) << endl;
  delete [] res1;
  delete [] res2;
}
