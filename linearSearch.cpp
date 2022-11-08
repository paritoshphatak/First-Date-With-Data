#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << endl << "Enter The Size of The Array : ";
    cin >> size;

    int *arr;
    arr = new int (size);
    int i;
    int val;

    cout << "Enter " << size << " Elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Element At " << i << " Index : ";
        cin >> arr[i];
    }

    cout << "Enter The Number You Want To Search : ";
    cin >> val;
    int flag = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            cout << "Element Found At " << i << " Index ! " << endl;
            flag ++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element Not Found !" << endl;
    }
}