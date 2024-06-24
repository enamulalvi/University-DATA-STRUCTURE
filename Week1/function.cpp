#include <iostream>
using namespace std;

void adding(int a[], int size)
{
    int pos, num;
    cout << "Enter position number & number " << endl;
    cin >> pos;
    cin >> num;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = num;

    for (int i = 0; i <= size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void droping(int a[], int size, int pos)
{
    if (pos < 0 || pos >= size)
    {
        cout << "Invalid position!" << endl;
        return;
    }


    for (int i = pos; i < size - 1; i++)
    {
        a[i] = a[i+1];
    }
    a[size - 1] = 0;

    for (int i = 0; i < size - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int temp;
    int a[100] = {11, 12, 13, 14, 15};
    int size = 5;

    cout << "To add number press  1 " << endl;
    cout << "To Drop number press 2 "<< endl;
    cin >> temp;
    if (temp == 1)
    {
        adding(a, size);
    } else if (temp == 2)
    {
        int pos;
        cout << "Enter position number to drop: ";
        cin >> pos;
        droping(a, size, pos);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
