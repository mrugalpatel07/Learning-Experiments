#include <iostream>
using namespace std;

template <typename T, int size>
void sort(T (&arr)[size])
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int intArry[5] = {3, 2, 6, 1, 4};
    sort(intArry);
    for (auto val : intArry)
        cout << val << " ";
    cout << endl;

   
    char charArry[5] = {'e', 'a', 'd', 'b', 'c'};
    sort(charArry);
    for (auto val : charArry)
        cout << val << " ";
    cout << endl;

    return 0;
}