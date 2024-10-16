#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << " enter age : ";
    cin >> age;
   
   if(age >= 18){
    cout << " You can vote\n";
   }else{
    cout << " You cant vote\n";
   }
    return 0;
}