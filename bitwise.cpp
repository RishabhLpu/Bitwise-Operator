#include <iostream>
using namespace std;
int andOperator(int a, int b)
{
    return a & b;
}
int opOperator(int a, int b)
{
    return a | b;
}
int xorOperator(int a, int b)
{
    return a ^ b;
}
int main()
{
    int a = 5;
    int b = 4;
    int c = andOperator(a, b);

    int d = opOperator(a, b);
    int z = xorOperator(a, b);

    cout << "And operator " << c << std::endl;
    cout << "Or operator " << d << std::endl;
    cout << "XOR operator " << z << std::endl;

    return 0;
}
