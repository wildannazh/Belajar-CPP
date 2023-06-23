#include<iostream>
using namespace std;
int main()
{
int number, space1, space2, space3;
int i, j, x, y, z;
cout << "Enter any number: ";
cin >> number;
space1 = (2*number)-1;
space2 = number-1;
space3 = space1*space2;
z = number-1;
for(i = 1; i <= number; i++)
{
    for(j = 1; j <= (2*i)-1; j++){
    for (x = 1; x <= number; x++)
    {
        for(y = 1; y <= space3; y++)
        {
            cout << " ";
        }
        for(y = 1; y <= number-x; y++)
        {
            cout << " ";
        }
        for(y = 1; y <= (2*x)-1; y++)
        {
            cout << "*";
        }
        for(y = 1; y <= z; y++)
        {
            cout << " ";
        }
        z--;
        if(x <= number)
        {
            cout << endl;
        }
    }
    if(z >= 3)
    {
        z = 1;
    }
    for(x = 1; x <= number-1; x++)
    {
        for(y = 1; y <= space3; y++)
        {
            cout << " ";
        }
        for(y = 1; y <= x; y++)
        {
            cout << " ";
        }
        for(y = 2*(number-x)-1; y >= 1; y--)
        {
            cout << "*";
        }
        for(y = 1; y <= z; y++)
        {
            cout << " ";
        }
        z++;
        if(x <= number)
        {
            cout << endl;
        }
    }
    }
    space3 -= space1;
}
}
