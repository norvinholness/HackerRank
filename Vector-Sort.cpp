#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, input;
   
    cin >> n;
    
    vector<int> V;
    
    while (cin >>input){
        V.push_back(input); 
    }
    
    sort (V.begin(), V.end());
    
    for (vector<int>::iterator iter = V.begin(); iter !=  V.end(); iter++){
        cout << *iter << " "; 
    }
    cout << endl; 
    
    return 0;
}