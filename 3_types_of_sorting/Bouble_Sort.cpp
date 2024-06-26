#include <iostream>

using namespace std;

int main()
{
    int n ;

    cout << "Number of elements you want to  insert : ";

    cin >> n ;

    int arr[n];

    cout << "Please Input the numbers: "<<endl;

    for(int i =  0 ; i < n ; i++)
    {
        cin >> arr[i];
    }


    int number ;

    int N = n;

    int k;



    for(number = 0 ; number < n-1 ; number++)
    {
        for(int i = 0 ; i < N-1; i++  )
        {


            if(arr[i] > arr[i+1])
            {
                k = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = k;
            }


        }

        --N;
    }

    cout << "Sorted array is : " ;

    for(int i = 0 ; i < n ; i ++  )
    {

        cout << arr[i] << " ";

    }
    return 0;
}
