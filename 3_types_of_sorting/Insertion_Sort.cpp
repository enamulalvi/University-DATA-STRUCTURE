#include <iostream>

using namespace std;

int main()
{
    int n ;

    cout << "Enter the numbers of elements : " ;

    cin >> n;

    int arr[n];

    cout << "Enter the elements : " << endl;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    int v = 0;

    for(int i = 1 ; i < n ; i++)
    {
        v = arr[i];

        for(int j = i-1 ; j >= 0 ; j--)
        {
            if(arr[j] > v)
            {
                int k ;
                k = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = k;
            }

            else
            {
                break;
            }
        }

    }


    cout << "your sorted array is : " ;

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
