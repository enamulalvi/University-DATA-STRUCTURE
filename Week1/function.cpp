#include <iostream>
using namespace std;
void adding(int a[100])
{
     int poss,num,i,temp;
    cout << "Enter possition number & number "<<endl;
    cin >> poss;
    cin >> num;
    cout << a[3];

}
void droping()
{

}

int main ()
{
   // int poss,num,i,temp;
   int temp;
    int a[100]={11,12,13,14,15};

    cout << "To add number press 1  and to drop number press 2 "<< endl;
    cin >> temp;
    if(temp==1)
    {
        adding(int a[5]);
    }
    else if(temp==2)
    {
        droping();
    }


}
