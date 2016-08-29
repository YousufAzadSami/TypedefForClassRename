#include <iostream>
#include "ClassARename.h"
#include "ClassB.h"

int main()
{
  std::cout << "asdf\n";

  ClassARename _a;
  std::cout << "in between\n";
  ClassB _b;
  std::cout << "Class A renamed with typeDef\n";
  // ClassA is renamed, but did not have to change the following name 
  // becase we typedeffed it in ClassA 
  ClassARenameWithTypeDef _aRename;
  
  std::cout << "asdfasdf\n";
  return 0;
}