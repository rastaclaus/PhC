#include "Video.h"
#include <cassert>

using namespace std;

bool Video::is_onhand() {
  return onhand;
}

string Video::get_title() {
  return ttile;
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
