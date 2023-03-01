#include <iostream>
using namespace std;
#include <time.h>

int main()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    setlocale(LC_ALL, "Russian");
    int data = buf.tm_mday;
    int sum = 0;
    const int size = 5;
    int divrem = data % size;
    int array[size][size];

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            array[i][j] = i + j;
            cout << array[i][j] << " ";
            sum = sum + array[divrem][j];
        }
        cout << endl;
    }
    cout << "остаток от деления: " << divrem << " /n"<<endl;
    cout << "сумма строки: " << sum<< endl;
    return 0;

}
