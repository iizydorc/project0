#include <iostream>
std::string code[] = {", ", "#include <iostream>", "std::string code[] = {",
"int main(){", "   for (int i = 1; i < 3; i++){", "      std::cout << code[i]<< std::endl;",
"   }", "   for (int i = 0; i < 18; i++){", "       std::cout << code[i] << code[0];",
 "   std::cout << code[18] <<std::endl;", "   for (int i = 3; i < 18; i++){", "       std::cout << code[i]<< std::endl;",
 "}", "return 0;", "      std::cout << code[i]<< std::endl;", "   }", "   return 0;",
 "}", "};"};
int main(){
   for (int i = 1; i < 3; i++){
      std::cout << code[i]<< std::endl;
   }
   for (int i = 0; i < 18; i++){
       std::cout << code[i] << code[0];
   }
   std::cout << code[18] <<std::endl;
   for (int i = 3; i < 18; i++){
       std::cout << code[i]<< std::endl;
   }
   return 0;
}
