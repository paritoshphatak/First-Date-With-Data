#include <iostream>
using namespace std;


// Traversing 

int main()
{
    int size;
    int *arr;
    cin >> size;
    arr = new int (size);
    int i;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Traversing array " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}



