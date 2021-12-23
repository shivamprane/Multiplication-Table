#include<iostream>
using namespace std;
int main()
{
int i =0, num1, result;

cout << "Enter a number" << endl;
cin >> num1;
cout << "multiplication table:" << endl;
for(i=1; i<=10; i++)
{
    result = num1 * i;    
    cout << num1 << " x " << i << " = " << result << endl;
}
return 0;

}
