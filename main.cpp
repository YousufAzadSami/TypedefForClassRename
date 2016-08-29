#include <iostream>
#include "ClassA.h"
#include "ClassB.h"

int main()
{
  std::cout << "asdf\n";

  ClassA _a;
  std::cout << "in between\n";
  ClassB _b;
  std::cout << "Class A renamed with typeDef\n";
  ClassARenameWithTypeDef _aRename;
  
  std::cout << "asdfasdf\n";
  return 0;
}