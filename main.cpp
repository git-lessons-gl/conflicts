#include <iostream>

int main()
{
        int a = 5;
        int b = 5;

        if (a < 0 || b < 0) {
                std::cout << "Invalid numbers" << std::endl;
                return -1;
        }

        printf("%d + %d = %d", a, b, a + b);

        return 0;
}
