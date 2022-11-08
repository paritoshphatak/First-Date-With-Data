#include <iostream>
using namespace std;


int main()
{
    int n;
    int i;
    int t;
    int num;
    cin >> n;
    int a[n];
    cout << "Number of elements in array\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter number to be deleted " << endl;
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num){
            t = i;
        }
    }
    
}