#include <iostream>
using namespace std;
int main()
{
   int a[3][3],b[3][3],c[3][3],d[3][3],i,j;

   cout << " Enter the 1st Matrix "<<endl;
   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cin >>a[i][j];
       }
       cout << endl;
   }

      cout << " Enter the 2nd Matrix "<<endl;
   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cin >>b[i][j];
       }
       cout << endl;
   }
   cout << " Entered the 1st elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cout <<a[i][j]<<" ";
       }
       cout << endl;
   }

   cout << " Entered the 2nd elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cout <<b[i][j]<<" ";
       }
       cout << endl;
   }

   cout << "Summation of matrix a+b"<<endl;

//cout << "Entered the 1st elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }

   }

  // cout << "Entered the 1st elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cout <<c[i][j]<<" ";
       }
       cout << endl;
   }

      cout << "Subtraction of matrix a+b"<<endl;

//cout << "Entered the 1st elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           d[i][j]=a[i][j]-b[i][j];
       }

   }

  // cout << "Entered the 1st elements "<<endl;

   for (i = 0;i<3;i++)
   {
       for (j = 0; j <3;j++)
       {
           cout <<d[i][j]<<" ";
       }
       cout << endl;
   }


}
