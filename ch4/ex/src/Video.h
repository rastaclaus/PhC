#ifndef VIDEO_H
#define VIDEO_H

#include <string>
struct Video {
  bool is_onhand();
  std::string get_title();
  sdt::string get_annotation();

  void initialise();
  void toGive();
  void takeBack();

  bool onhand;
  std::string ttile;
  std::string annot;
};

#endif
