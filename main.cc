#include <iostream>

main (int c, char* argv[]) {
    
    std::cout << "Total args: " << c <<  std::endl <<  std::endl;
      
    if (c == 1) {
      std::cout << "Hello World!" <<  std::endl;
    } else
    if (c == 2) {
      std::cout << "Hello World 2nd time!" <<  std::endl;
    } else
    if (c == 3) {
      std::cout << "Hi!" <<  std::endl;
    } else
    if (c == 4) {
      std::cout << "Hi again!" <<  std::endl;
    }
      
    return 0;
}
