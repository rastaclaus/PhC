#include <string>
#include <iostream>

using namespace std;

struct Lib {
  string a;
  string b;
  string c;
};

class Libc {
/*string a;
  string b;
  string c;*/
  string s[3];
public:
  void seta(const string&);
  void setb(const string&);
  void setc(const string&);
  string geta();
  string getb();
  string getc();
};

void Libc::seta(const string& na){
  s[0] = na;
}

void Libc::setb(const string& nb){
  s[1] = nb;
}

void Libc::setc(const string& nc){
  s[2] = nc;
}

string Libc::geta(){
  return s[0];
}

string Libc::getb(){
  return s[1];
}

string Libc::getc(){
  return s[2];
}


int main()
{
  Lib x;
  x.a = "a";
  x.b = "b";
  x.c = "c";
  cout << x.a << x.b << x.c << endl;
  Libc y;
  y.seta("a");
  y.setb("b");
  y.setc("c");
  cout << y.geta() << y.getb() << y.getc() << endl;
}

