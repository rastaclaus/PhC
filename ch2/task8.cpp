// :C02:task8.cpp
// заполнение вектора вещественных чисел


#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<float> v;
  for (int i=0; i < 25; ++i){
    v.push_back(i * 0.01);
    cout << v[i] << endl;
  }
}///:~
