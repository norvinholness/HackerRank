#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std; 

void update(int *a, int *b) {
  *a =  *a + *b;       
  *b = abs(*a-*b-*b);  
}

int main() {
    int a, b;
    int *pa = &a; 
    int *pb = &b;
    
    cin >> a >> b; 
    update(pa, pb);
    cout << a << endl;
    cout << b << endl; 

    return 0;
}
