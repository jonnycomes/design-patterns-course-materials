#ifndef STRING_H
#define STRING_H

#include <string>
#include <vector>

class String {
private:
  std::string _str;
public:
  String(std::string str = ""); // Constructor
  std::string getStdString(); // Returns the associated std::string
  int getLength(); // Returns the length of the String
  void print();     // Prints the String to the terminal (no line break)
  void printLine(); // Prints the String to the terminal ending with a line break
  bool equals(String); // Determines if two Strings are equal

  /* Returns the vector of subStrings separated by the separator.
     Examples: *if s = String("apple, carrot, banana")
                then s.split(", ") = {"apple", "carrot", "banana"}
               *if t = String("A sentence can also be split.")
                then t.split(" ")  = {"A", "sentence", "can", "also", "be", "split."}
               *if w = String(",A, weird,,one,")
                then w.split(",")  = {"", "A", " weird", "", "one", ""}
     If separator == "", then the string should split over each character.
      Example: *if u = String("taco") 
                then u.split("") = {"t", "a", "c", "o"}                    */
  std::vector<String> split(std::string separator);        
};

#endif