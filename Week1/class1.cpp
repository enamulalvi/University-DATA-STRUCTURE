using namespace std;
int main ()
{
    int n;
    //cout <<"Enter the nummber of elements ";
    cin >> n;

int arr [n];

cout << "enter the elements you given ";

for (int i =0;i<n ; i++)
{
    cin >> arr[i];
}
 int count=0;
for (int i =0;i<n;i++ )
{
    for (int j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            count ++;

            break;
        }
    }
}

cout << count;

return 0;
}
