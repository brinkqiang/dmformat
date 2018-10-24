# dmformat

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[dmformat GitHub](https://github.com/brinkqiang/dmformat)

##

## Build status
| [Linux][lin-link] | [MacOSX][osx-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![osx-badge]       | ![win-badge]        |

[lin-badge]: https://travis-ci.org/brinkqiang/dmformat.svg?branch=master "Travis build status"
[lin-link]:  https://travis-ci.org/brinkqiang/dmformat "Travis build status"
[osx-badge]: https://travis-ci.org/brinkqiang/dmformat.svg?branch=master "Travis build status"
[osx-link]:  https://travis-ci.org/brinkqiang/dmformat "Travis build status"
[win-badge]: https://ci.appveyor.com/api/projects/status/github/brinkqiang/dmformat?branch=master&svg=true "AppVeyor build status"
[win-link]:  https://ci.appveyor.com/project/brinkqiang/dmformat "AppVeyor build status"

## Intro
C++11 string format lib, based on fmt.
```cpp

#include "dmformat.h"
#include "dmtime.h"
#include <iostream>
#include <vector>
#include <list>
#include <sstream>

int main()
{
    std::cout << fmt::format("{0},{1},{2}", "a", "b", "c") << std::endl;
    std::cout << fmt::format("{2},{1},{0}", "a", "b", "c") << std::endl;
    std::cout << fmt::format("{:%Y-%m-%d %H:%M:%S}", fmt::localtime(time(NULL))) << std::endl;

    std::cout << fmt::to_number<float>(fmt::to_string(std::numeric_limits<float>::max())) << std::endl;
    std::cout << fmt::to_number<double>(fmt::to_string(std::numeric_limits<double>::max())) << std::endl;
    std::cout << fmt::to_number<long double>(fmt::to_string(std::numeric_limits<long double>::max())) << std::endl;
    std::cout << fmt::to_number<int>(fmt::to_string(std::numeric_limits<int>::max())) << std::endl;
    std::cout << fmt::to_number<int>(fmt::to_string(std::numeric_limits<int>::min())) << std::endl;

    std::cout << fmt::to_number<long long>(fmt::to_string(std::numeric_limits<long long>::max())) << std::endl;
    std::cout << fmt::to_number<unsigned long long>(fmt::to_string(std::numeric_limits<unsigned long long>::max())) << std::endl;

    std::cout << fmt::format("{}{}{}{}{}{}{}{}{}{}{}{}",
        1, 2, 3, 4, 5, 6, 'a', 'b', 'c', 'd', 'e', 'f') << std::endl;

    std::cout << fmt::format("{_1}/{a_}/{A_}", fmt::arg("a_", 'a'),
        fmt::arg("A_", "A"), fmt::arg("_1", 1)) << std::endl;

    char name[] = "fmt";
    std::string strName = "{}";
    strName = fmt::format(strName, name);

    return 0;
}

```



## Contacts
[![Join the chat](https://badges.gitter.im/brinkqiang/dmformat/Lobby.svg)](https://gitter.im/brinkqiang/dmformat)

## Thanks
