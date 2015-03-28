//:c03:ex27.cpp
//
#include <iostream>
using namespace std;

void print_arr(double *arr, int arr_size){
  for (int i=0; i < arr_size; ++i)
    cout << arr[i] << endl;
}


int main() {
  const int as = 5;
  const double da1[as] = {1.1, 2.2, 3.3, 4.4, 5.5};
  volatile double da2[as] = {0.1, 0.2, 0.3, 0.4, 0.5};
  // print_arr(da1, as);
  // print_arr(da2, as);
  double *da3 = const_cast<double*>(da1);
  double *da4 = const_cast<double*>(da2);
  for (int i=0; i<as; ++i)
    da3[i] = 0;
  print_arr(da3, as);
  print_arr(da4, as);

}
