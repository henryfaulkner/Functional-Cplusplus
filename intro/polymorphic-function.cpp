#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

class Add
{
public:
    int operator()(int a, int b) const
    {
        return a + b;
    }
};

int main()
{
    std::function<int(int, int)> func;
    func = sum;
    std::cout << func(6, 4) << std::endl;
    return 0;
}