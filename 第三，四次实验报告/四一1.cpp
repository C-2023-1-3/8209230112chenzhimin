#include <iostream>  
int main()
{
    int i = 0;
    const int score = 10;
    std::cout << "Enter ten numbers:";
    int arr[score];
    for (int k=0; k<10;k++ )
    {
        std::cin >> arr[i];
        for (int n = 0; n < i; n++)
        {
            if (arr[i] == arr[n])
            {
                i--;
                break;
            }
        }
        i++;
    }
    std::cout << "The distinct numbers are:";
    for (int n= 0; n<i ; n++)
    {
        std::cout << arr[n] << " ";
    }
    return 0;
}
