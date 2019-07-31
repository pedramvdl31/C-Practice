// Example program
using namespace std;
#include <iostream>
#include <string>


int main()
{
    int var1, var2, op, result;
    
    cout << "Input the first variable \n";
    cin >> var1;
    
    cout << "Input the second variable \n";
    cin >> var2;

    /* + - / * */
    cout << "Press \n1:+ \n2:- \n3:* \n4:/";
    
    cin >> op;
    
    switch(op){
        case 1:
            result = var1 + var2;
        break;
        case 2:
            result = var1 - var2;
        break;
        case 3:
            result = var1 * var2;
        break;
        case 4:
            result = var1 / var2;
        break;
    }
    
    
}
