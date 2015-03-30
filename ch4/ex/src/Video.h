#ifndef VIDEO_H
#define VIDEO_H

#include <string>
struct Video {
  bool is_onhand();
  std::string get_title();
  std::string get_annotation();

  void initialise(const std::string& t, const std::string& a);
  void toGive();
  void takeBack();

  void print();

  bool onhand;
  std::string title;
  std::string annot;
};

#endif
