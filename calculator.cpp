#include<iostream>
using namespace std;
class Maths
{
int n1,n2,res;

public:

Maths()
{
cout << "Enter first num : ";
cin >> n1;
cout << "Enter second num : ";
cin >> n2;
}
void sum()
{
    res=n1+n2;
    cout << " Sum is : " << res;
}
void sub()
{
    res=n1-n2;
    cout << "Sub is : " << res;
}
void multi()
{
    res=n1*n2;
    cout << "Product is : " << res;
}
void divide()
{
    res=n1/n2;
    cout << "division is : " << res;
}
};

int main()
{
    char op;
    Maths mt;
    cout << "Enter Opperator(+,-,*,/) : ";
    cin >> op;
     if (op == '+')
    {
        mt.sum();
    }
    else if (op == '-')
    {
        mt.sub();
    }
    else if (op == '*')
    {
        mt.multi();
    }
    else if (op == '/')
    {
        mt.divide();
    }
    else
    {
       cout << "WRONG OPPERATOR !!";
    }
}
