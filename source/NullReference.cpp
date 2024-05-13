#include <iostream>
#include <vector>
#include <string.h>
#include "../header/log.h"

template <typename T>
void swap(T &a, T &b)
{
    T &temp = a;
    a = b;
    b = temp;
}
int main()
{
    Log log;

    log.SetLogLevel(log.Error);
    log.PrintError("This is error");
    log.PrintWarning("This is warning");
    log.PrintInfo("This is info");
    
    std::string str1 = "first";
    std::string str2 = "second";
    std::cout << str1 << "\t" << str2 << std::endl;
    swap(str1, str2);
    std::cout << str1 << "\t" << str2 << std::endl;
    // std::vector<int> a;
    int a[] = {3, 1, 0, 0, 98, 0, -3, 89, 6, 0, 9, 0, 0, 0, 6};
    int num_elements = sizeof(a) / sizeof(a[0]);
    int populated = -1;
    for (int i = 0; i < num_elements; i++)
    {
        if (a[i] != 0 && ++populated < i)
        {
            a[populated] = a[i];
            a[i] = 0;
        }
    }
    for (auto &&i : a)
    {
        std::cout << " " << i;
    }

    return 0;
}