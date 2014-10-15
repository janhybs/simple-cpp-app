#include <iostream>

main (int c, char* argv[]) {
    
    std::cout << "Total args: " << c << endl << endl;
      
    if (c == 1) {
      std::cout << "Hello World!" << endl;
    } else
    if (c == 2) {
      std::cout << "Hello World 2nd time!" << endl;
    } else
    if (c == 3) {
      std::cout << "Hi!" << endl;
    } else
    if (c == 4) {
      std::cout << "Hi again!" << endl;
    }
      
    return 0;
}
