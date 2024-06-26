#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements you want to enter : " ;

    cin >> n;

    int arr[n];

    cout << "Enter the elements you want to sort : " << endl;

    for(int i = 0 ; i < n ; i++)
    {

        cin>> arr[i];


    }

    int k = 0;

    int l = 0;

    for(int i = 0 ; i < n ; i++ )
    {
        k = arr[i];

        l = i ;


        for(int j = i+1 ; j < n ; j++)
        {
            if(k > arr[j])
            {
                k = arr[j];

                l = j;

            }
        }

        arr[l] = arr[i];
        arr[i] = k;

    }


    cout << "your sorted array is : " << endl;

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }

    return 0;
}
