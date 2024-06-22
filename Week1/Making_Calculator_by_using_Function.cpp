#include <iostream>
using namespace std;
int summation (int x,int y)
{
    int sum = x+y ;
    cout << "result= "<<sum;
}

int minimus (int x,int y)
{
    int minimus = x-y ;
    cout << "result = "<< minimus;
}
float divider ( float x ,float y)
   {

    float divid= x/y ;
    cout << "Result= "<< divid;
   }
   int multiplication (int x,int y)
   {
       int multiple = x*y;
       cout << "Results= "<< multiple;
   }

    void input ()
    {
       int n1,n2;
        cout << "enter 1st numbr";
        cin >> n1;
        cout << "enter 2nd number";
        cin >> n2;
        minimus(n1,n2);
    }
    void input1 ()
    {
       int n1,n2;
        cout << "enter 1st numbr";
        cin >> n1;
        cout << "enter 2nd number";
        cin >> n2;
        summation(n1,n2);
    }
    void input2 ()
    {
       int n1,n2;
        cout << "enter 1st numbr";
        cin >> n1;
        cout << "enter 2nd number";
        cin >> n2;
        if ( n1>n2){
        divider(n1,n2);
        }
        else
            cout << "Enter number 1 is greater";
    }
    void input3 ()
    {
       int n1,n2;
        cout << "enter 1st numbr";
        cin >> n1;
        cout << "enter 2nd number";
        cin >> n2;
        multiplication(n1,n2);
    }


int main ()
{
    int n;
    cout <<"enter the Task manager number ";
    cin>> n;



        if ( n==1)
        {
            input ();
        }
        else if (n==2)
        {
            input1 ();
        }
        else if (n==3)
        {
            input2 ();
        }
        else if (n==4)
        {
            input3 ();
        }







    return 0;
}
