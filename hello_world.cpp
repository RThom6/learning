#include <iostream>

int main(){
    // std specifies namespace, cout is part of iostream library 
    std::cout << "Hello World!" << std::endl; // \n is more efficient, doesn't flush buffer
    // std::cout preferred over C's printf due to Type Safety
    printf("Hello World 2!\n");

    // copy initialisation, copies value on RHS to the variable in LHS
    // int width = 5;

    // direct initialisation - More efficient when using complex objects, also not favourable
    // int widths(5);

    // List initialisation avoids narrowing conversions
    //int width {4.5}; compiler won't allow 

    // int x{}; // define variable x to hold user input (and value-initialize it)
    // int y{}; // define variable y to hold user input (and value-initialize it)
    // std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    // std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}