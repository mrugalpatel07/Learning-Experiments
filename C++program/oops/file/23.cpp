#include <iostream>
using namespace std;

template <typename T, int size>
void sort(T (&arry)[size])
{
    for (int i = 0; i < size ; i++)
    {
    for (int j = i; j < size ; j++)
    {
        if (arry[i] > arry[j])
         {
          T temp = arry[i];
            arry[i] = arry[j];
            arry[j] = temp;
            }
        }
    }
}

 int main()
{
    int intArry[5] = {3, 2, 6, 1, 4};

      sort(intArry);
    

    

    char charArry[5] = {'e', 'a', 'd', 'b', 'c'};

      sort(charArry);
    for (auto val : charArry)
        cout << val << " ";
    cout << endl;

    return 0;
}