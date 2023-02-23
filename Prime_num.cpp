#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Pls enter an integer bigger than 1 : " << endl;
    int num(0);
    cin >> num;

    identify_primeNum(num);
}

int identify_primeNum(int num)
{
    if (num > 1)
    {

        float result = num / 2;
        int x = floor(result);
        int range = x - 2 + 1;

        for (int i = 0; i < range; i++)
        {
            int identify = num % i;
            if (identify == 0)
            {
                cout << "It's a prime number ! " << endl;
            }
            else
                (identify != 0);
            {
                cout << "It's not a prime number ! " << endl;
            }
        }
    }

    if (num <= 1)
    {
        cout << "Please enter an integer bigger than 1 ! " << endl;
    }
}