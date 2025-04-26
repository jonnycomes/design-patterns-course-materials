#include "String.h"

int main() {
  String s;
  String t("taco");  
  t.printLine(); //This should print taco with a line break.

  // Here's one test for equals(). You should add more tests.
  if(s.equals(t)) { String("this shouldn't print").printLine(); }
  else { String("this should print").printLine(); }

  /* If split() and printLine() are working correctly, the following line should
     result in the terminal output:
     t
     a
     c
     o
  */
  for(auto str : t.split("")) { str.printLine(); }

  /* The line below should give the following output in the terminal:
     item 1
     item 2
     item 3
     last item.
  */
  String list("item 1, item 2, item 3, last item.");
  for(auto str : list.split(", ")) { str.printLine(); }
}
