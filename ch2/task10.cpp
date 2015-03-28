// :C02:task10.cpp
// заполнение вектора вещественных чисел, возведение каждого элемента вектора
// в квадрат

#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<float> v;
  for (int i=0; i < 25; ++i){
    v.push_back(i * 0.01);
    cout << v[i] << endl;
  }
  for (int i=0; i < 25; ++i){
    v[i]*=v[i];
    cout << i << ":\t" << v[i] << endl;
  }
}///:~
