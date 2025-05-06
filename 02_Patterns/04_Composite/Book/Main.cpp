#include "BookComponent.h"
#include "Chapter.h"
#include "ReferenceSection.h"

int main() {
  Chapter book("Book Title", "Introduction to the book");
  Chapter chapter1("First Chapter", "Intro to chapter 1");
  Chapter chapter2("Second Chapter", "Intro to chapter 2");
  Chapter section1("First Section", "contents of section 1");
  Chapter section2("Second Section", "contents of section 2");
  Chapter section3("Third Section", "contents of section 3");
  ReferenceSection references;
  references.addReference("here's a reference.");
  references.addReference("here's another reference.");
  book.add(&chapter1);
  book.add(&chapter2);
  chapter1.add(&section1);
  chapter1.add(&section2);
  chapter2.add(&section3);
  book.add(&references);
  book.print();
}