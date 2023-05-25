#include <iostream>

int main()
{
    // simple lambda
    auto divide = [](double a, double b) -> double
    {
        return a / b;
    };
    std::cout << divide(5, 2) << std::endl;

    // simple lambda with lambda introduction
    std::string toppings = "cheese, sauce";
    std::string pizza = "pizza";
    auto addPepperoni = [&toppings]()
    {
        toppings += ", pepperoni";
    };
    addPepperoni();

    std::cout << toppings + " " + pizza << std::endl;
}