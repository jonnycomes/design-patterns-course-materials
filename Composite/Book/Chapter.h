#ifndef CHAPTER_H
#define CHAPTER_H

#include "BookComponent.h"
#include <string>
#include <vector>

class Chapter : public BookComponent {
private:
  std::string _title;
  std::string _contents;
  std::vector<BookComponent*> _children;
public:
  Chapter();
  Chapter(std::string title, std::string contents);
  void add(BookComponent*);
  void print();
};

#endif