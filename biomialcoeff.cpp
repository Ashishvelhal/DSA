#include<iostream>
using namespace std;


int factorical(int n) {
    int fact = 1;

    for(int i =1; i<=n; i++) {
    fact *= i;
    }
    return fact;
}

int nCr(int n ,int r){

 int fact_n = factorical(n);
 int fact_r = factorical(r);
 int fact_nmr = factorical(n-r);

  return  fact_n/(fact_r * fact_nmr);
}


int main(){

    int n = 8, r = 2;
    cout << nCr(n,r) << endl;

    return 0;
}