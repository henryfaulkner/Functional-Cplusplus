#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
std:
    transform(v.begin(), v.end(), v.begin(), [](int n)
              { return n + 2; });
    std::for_each(v.begin(), v.end(), [](int a)
                  { std::cout << a << std::endl; });
    std::cout << "break" << std::endl;

    std::vector<int> v1;
    std::copy_if(v.begin(), v.end(), std::back_inserter(v1), [](int a)
                 { return a % 2 == 0; });
    std::for_each(v1.begin(), v1.end(), [](int a)
                  { std::cout << a << std::endl; });
}