#include "Video.h"
#include <cassert>
#include <iostream>

using namespace std;

bool Video::is_onhand() {
  return onhand;
}

string Video::get_title() {
  return title;
}

string Video::get_annotation() {
  return annot;
}

void Video::takeBack() {
  assert(onhand);
  onhand = false;
}

void Video::toGive() {
  assert (!onhand);
  onhand = true;
}

void Video::initialise(const string& t, const string& a){
  title = t;
  annot = a;
  onhand = false;
}

void Video::print() {
  cout << title << "; " << annot << "; "
    << (onhand?"on hand":"stored") << endl;
}
