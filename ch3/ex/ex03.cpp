// :C03:ex03.cpp

#include <iostream>
using namespace std;

int main() {
  string word;
  while (true){
    cin >> word;
    int i = 0;
    if (word == "#include")
      i = 1;
    else if (word == "namespace")
      i = 2;
    else if (word == "main")
      i = 3;
    else if (word == "while")
      i = 4;
    else if (word == "int")
      i = 5;
    else if (word == "cin")
      i = 6;
    else if (word == "else")
      i = 7;
    else if (word == "bye" or !cin)
      break;

    switch (i) {
      case 1:
        cout << "find #include..." << endl;
        break;
      case 2:
        cout << "entering namespace..." << endl;
        break;
      case 3:
        cout << "entering main..." << endl;
        break;
      case 4:
        cout << "entering loop..." << endl;
        break;
      case 5:
        cout << "find int..." << endl;
        break;
      case 6:
        cout << "find cin..." << endl;
        break;
      case 7:
        cout << "find else..." << endl;
        break;
      default:
        cout << "don't know, what is " << word << endl;
    }
  }
}
