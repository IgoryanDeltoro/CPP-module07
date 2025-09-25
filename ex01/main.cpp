#include "iter.hpp"
template <typename T>

void display_stuff(const T &n) {
    std::cout << n;
}

int main()
{
    std::cout << "\n=================================\n";
    int dig[] = {0,1,2,3,4,5,6,7,8,9};
    iter(dig, (sizeof(dig) / sizeof(dig[0])), display_stuff<int>);

    std::cout << "\n\n=================================\n";
    const std::string str[] = {"Hello ", "World", "!", "\n"};
    iter(str, sizeof(str) / sizeof(str[0]), display_stuff<std::string>);
    return 0;
}
