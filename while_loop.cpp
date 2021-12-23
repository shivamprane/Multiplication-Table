#include<iostream>
using namespace std;
int main()
{
int i =1, num1, result;

cout << "Enter a number" << endl;
cin >> num1;
cout << "multiplication table:" << endl;
    while(i<=10)
    { 
    
        result = num1 * i;       
        cout << num1 << " x " << i << " = " << result << endl;
       
          i++;
    
    }
    return 0;

}
