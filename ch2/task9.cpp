// :C02:task9.cpp
// заполнение 2-х векторов вещественных чисел, заполнение 3-го вектора
// суммами их соответствующих элементов 


#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<float> v1, v2, v3;
  for (int i=0; i < 25; ++i){
    v1.push_back(i * 0.01);
    v2.push_back(i * 0.02);
    v3.push_back(v2[i] + v1[i]);
    cout << i << ":\t" << v1[i] << " + " << v2[i] << " = " << v3[i] << endl;
  }
}///:~
