#include "Person.h"

int main()
{
    Person person1;
    Person person2("Bob");
    Person person3("sue", 35);

    std::cout << person1.toString() << std::endl;
    std::cout << person2.toString() << std::endl;
    std::cout << person3.toString() << std::endl;
    
    return 0;
}