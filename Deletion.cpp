#include <iostream>
using namespace std;


int main()
{
    
    int i;
    int index;
    int arr[50];
    int size;
    cout << endl << "Enter Size Of The Array : ";
    cin >> size;
    if (size >= 50)
    {
        cout << endl << "Enter Size Less Than 50 : ";
        cin >> size;
    }
    cout << endl << "Enter " << size << " Elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Element At " << i << " Index : ";
        cin >> arr[i];
    }
    cout << endl << "Enter The Index From Where You Want To Delete The Element : ";
    cin >> index;
    for (i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << endl << "The Array After Deletion Of An Element Is : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
