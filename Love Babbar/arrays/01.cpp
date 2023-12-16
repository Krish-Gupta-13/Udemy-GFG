#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing arrays" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << "printing done" << endl;
}

int main()
{
    int first[15] = {1, 3, 2, 4, 5, 6};
    printarray(first, 15);
    cout << endl;
    int second[15] = {12, 435, 324, 32, 34};
    printarray(second, 15);

    return 0;
}