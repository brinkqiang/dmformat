
#include "dmformat.h"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::cout << fmt::format("{0},{1},{2}", "a", "b", "c") << std::endl;
    std::cout << fmt::format("{2},{1},{0}", "a", "b", "c") << std::endl;
    std::cout << fmt::format("{2},{1},{0}", "a", "b", "c") << std::endl;

    std::cout << fmt::format("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}",
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e',
        'f', 'g') << std::endl;

    std::cout << fmt::format("{_1}/{a_}/{A_}", fmt::arg("a_", 'a'),
        fmt::arg("A_", "A"), fmt::arg("_1", 1)) << std::endl;

    char name[] = "fmt";
    std::string strName = "{}";
    strName = fmt::format(strName, name);

    return 0;
}