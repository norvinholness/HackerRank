#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int var1;
    long var2;
    char var3;
    float var4;
    double var5;
    
    cin >> var1 >> var2 >> var3 >> var4 >> var5 ;
    
    cout << var1 <<endl;
    cout << var2 <<endl;
    cout << var3 <<endl;
    cout << fixed << std::setprecision(3) << var4 <<endl;
    cout << fixed << std::setprecision(9) << var5 <<endl;
    
    return 0;
}