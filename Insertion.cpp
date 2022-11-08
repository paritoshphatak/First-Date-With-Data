#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << endl << "Enter Size of Array : ";
    cin >> size;

    int arr[50];
    

    cout << "Enter  " << size << " Elements : " << endl;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Element At " << i << " Index : ";
        cin >> arr[i];
    }
    int val;
    cout << "Enter The Value You Want To Insert : ";
    cin >> val;

    int index;
    cout << "Enter The Index At Which You Want To Insert The Element : ";
    cin >> index;

    for (i = (size - 1); i >= index; i--)
    {
        arr[i + 1] = arr[i];   
    }
    arr[index] = val;
    size++;
    cout << "The New Array Is : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
