#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    const int n = 10;
    int A[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 21 - 10;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
        cout << "\n";
    }
    int max = 1;
    for (int i = 0; i < n; i++) 
        if (A[i] > max) max = A[i];
    cout << "Максимальное число: " << max;
    int min = 1;
    for (int i = 0; i < n; i++)
        if (A[i] < min) min = A[i];
    cout << "\nМинимальное число: " << min;
    return 0;
}