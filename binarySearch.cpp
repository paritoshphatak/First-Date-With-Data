#include <iostream>
using namespace std;


// WITHOUT FUNCTION CALL

int main()
{

    int size;
    cout << endl;
    cout << "Enter The Size Of The Array : ";
    cin >> size;

    int *arr;
    arr = new int (size);
    char opt;
    
    cout << endl;
    cout << "Enter 'y' If You Want To Enter The Elements Manually " << endl;
    cout << "Enter 'n' If You Want ELements To Be Entered By A Formula Automatically " << endl;
    cout << "Enter Here : ";
    cin >> opt;

    if (opt == 'y')
    {
        cout << "Enter " << size << " Elements : " << endl;
    }

    int i;
    for (i = 0; i < size; i++)
    {
        if (opt == 'y')
        {
            cout << "Enter " << i << " Index Element : ";
            if (i == 0)
            {
                cin >> arr[i];
            }
            else
                if (i != 0)
                {
                    cin >> arr[i];
                    if (arr[i] < arr[i - 1])
                    {
                        cout << "Enter Value Greater Than " << arr[i - 1] << " At " << i << " Index : ";
                        cin >> arr[i];
                    }
                }

        }
        else
        break;
    }
    if (opt == 'n')
    {
        cout << endl;
        cout << "Elements Will Be Entered Automatically In Ascending Order " << endl;
    }
    for (i = 0; i < size; i++)
    {
        if (opt == 'n')
        {
            arr[i] = (i + 3) * 2;
        }
    }
    if (opt == 'y')
    {
        cout << endl;
        cout << "The Array Is Sorted In Ascending Order , Now Binary Search Can Be Performed " << endl;
        cout << endl;
    }
    int val;
    cout << "Enter The Value You Want To Search : ";
    cin >> val;
    int low;
    int high;
    int mid;
    int found = 0;
    low = 0;
    high = size - 1; 
    while (low <= high)
    {
        mid = (low + high)/2;
        if (val == arr[mid])
        {
            cout << endl;
            cout << "Element Found At " << mid << " Index " << endl;
            found ++;
            break;
        }
        else 
            if (val < arr[mid])
            {
                high = mid - 1;
            }
        else
        {
            low = mid + 1;
        }
        
    }
    if (found == 0)
    {
        cout << "Element Not Found ! " << endl;
    }
    
}