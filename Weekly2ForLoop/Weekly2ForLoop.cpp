

#include <iostream>
#include <string>

int count = 1;

int main()
{
    for (; count <= 100;) {
        std::cout << count << ' ';
        ++count;
    }
}

