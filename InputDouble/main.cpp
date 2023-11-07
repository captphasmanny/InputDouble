//
//  main.cpp
//  InputDouble
//
//  Created by Emanuel Alfaro on 11/6/23.
//

#include <iostream>

int inputNumber()
{
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

void doubleNumber()
{
    std::cout << "Double that number is: ";
}

int main()
{
    int y{inputNumber()};
    int z = (y * 2);
    doubleNumber();
    std::cout << z << '\n';
    int a{inputNumber()};
    std::cout << a << " + 4 = " << a+4 << '\n';
    return 0;
}

/*int main()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    int y{x*2};
    std::cout << "Double " << x << " is: " << y << '\n';
    std::cout << "Triple " << x << " is: " << x*3 << '\n';
    
    int a{};
    std::cout << "Enter an integer: ";
    std::cin >> a;
    //std::cout <<'\n';
    int b{};
    std::cout << "Enter another integer: ";
    std::cin >> b;
    //std::cout <<'\n';
    std::cout << a << " + " << b << " = " << a+b << '\n';
    std::cout << a << " - " << b << " = " << a-b << '\n';
}*/
 
