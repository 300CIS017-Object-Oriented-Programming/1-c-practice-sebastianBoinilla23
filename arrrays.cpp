#include <iostream>


int main()
{
    int i = 0;
    int array[] = { 1, 2,3 ,4, 5};
    size_t n = sizeof(array)/sizeof(array[0]);

    for (int i = n - 1; i >= 0; i--) {
        std::cout << array[i] << ' ';
    }

    return 0;
}
