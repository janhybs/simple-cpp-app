#include <iostream>

main (int c, char* argv[]) {
    if (c == 1) {
      std::cout << "Hello World!";
    } else
    if (c == 2) {
      std::cout << "Hello World 2nd time!";
    } else
    if (c == 3) {
      std::cout << "Hi!";
    } else
    if (c == 4) {
      std::cout << "Hi again!";
    }
      
    return 0;
}
