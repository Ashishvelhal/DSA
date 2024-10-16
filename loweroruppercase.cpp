#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter char : ";
    cin >> ch;
    
    if (ch >= 'a' && ch <= 'z'){
        cout << " chracter is in Lower case\n";
    }else{
        cout << " chracter is in Upper case\n";
    }
    return 0;
}