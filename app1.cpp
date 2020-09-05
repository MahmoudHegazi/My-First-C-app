/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/
#include <iostream>

int main()
{
    int i = 0;
    std::cout << "==========================================\n\n";
     i += 1;
    std::cout << "Pring Variables Programming Quiz \n\n";
    if (i == 1) {
    std::cout << "==========================================\n\n";
    i += 1;
    };
    if (i == 2) {
    std::cout << "int size = " << sizeof(int) << "\n";
    std::cout << "short int size =  " << sizeof(short int) << "\n"; 
     i += 1;
    }
    if (i % 2 == 1) {
    std::cout << "long int size =  " << sizeof(long int) << "\n";
    std::cout << "char size =  " << sizeof(char) << "\n";
    std::cout << "float size =  " << sizeof(float) << "\n";
    std::cout << "double size =  " << sizeof(double) << "\n";
    std::cout << "bool size =  " << sizeof(bool) << "\n";
    std::cout << "==========================================\n";
    std::cout << "Hello world C++ \n";
    std::cout << "==========================================\n";
    }
    
    
    return(0);
}
