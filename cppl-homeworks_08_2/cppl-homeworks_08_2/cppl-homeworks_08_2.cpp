// cppl-homeworks_08_2.cpp 

#include <iostream>
#include <set>
#include <list>
#include <vector>

template <class T>
void print_container(T& in_array)
{
    for (auto it = in_array.begin(); it != in_array.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl; 
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);// four one three two. помните почему такой порядок? :)
    
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four
    
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
    
    return 0;
}
