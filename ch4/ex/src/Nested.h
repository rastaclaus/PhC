#include <iostream>
#include <string>

struct External {
  struct Nested {
    void initialize();
    int d1;
    int d2;
  } data;
  void initialize(const std::string& is);
  void print();

  std::string name;
};
