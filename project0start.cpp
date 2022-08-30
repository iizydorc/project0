#include <iostream>

std::string code[] = {"#include <iostream>", " ","int main(){",
                     "   for (int i = 0; i < 8; i++){",
                      "      std::cout << code[i]<< std::endl;", "   }",
                      "   return 0;", "}"};
int main(){
   for (int i = 0; i < 8; i++){
      std::cout << code[i]<< std::endl;
   }
   return 0;
}
