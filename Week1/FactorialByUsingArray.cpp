/*#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << " enter the number ";
    cin >> n;
    int arr[300];
    for(int i = 0; i<=n;i++)
    {
        cin>> arr[i];
        sum = sum + arr[i];
    }
    cout << "sum "<< sum;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[6] = {12,13,14,15,16,17};
    cout << " Enter the number "<< endl;
    cin >> n;

    for (int i = 0;i<=5; i++)
    {
        if (n == arr[i])
        {
            cout << "mached "<< i<<endl;
        }
        else
        {
            cout << "not Found ";
        }
    }
}
