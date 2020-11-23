
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High, int i)
{
    
        r[i] = Low + rand() % (High - Low + 1);
        if (i < size - 1)
            Create(r, size, Low, High, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i];
    if (i < size - 1)
        Print(r, size, i + 1);
    else
    cout << endl;
}
int Max(int* a, const int size)
{
    int max = a[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {

        if (a[i] > max && a[i] % 2 == 0) {
            max = a[i];
            index = i;
        }

    }
    return index;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int r[n];
    int Low = 4;
    int High = 73;
    Create(r, n, Low, High, 0);
    Print(r, n, 0);
    
    cout << "index=" << Max(r, n) << endl;
    system("pause");
    return 0;
}
