// cppl-homeworks_08_1.cpp 

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector <int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "IN: ";
    for (auto it = vec.begin(); it != vec.end(); it++) std::cout << *it << " ";
    std::cout << std::endl;
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
    std::cout << "OUT: ";
    for (auto it = vec.begin(); it != vec.end(); it++) std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
