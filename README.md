#include <iostream>

int main()
{
int n;
std::cin » n;
int* arr = new int[n];
for(int i = 0; i < 5; i++)
std::cin » arr[i];
for(int i = 5; i < n; i++)
arr[i] = arr[i % 5];
for(int i = 0; i < n; i++)
std::cout « arr[i] « " ";

return 0;
}
