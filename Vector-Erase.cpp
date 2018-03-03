#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, pos, val, rBegin, rEnd;
    cin >> n;
    vector<int> V;
    
    for (int i = 0; i < n; ++i) {
        cin >> val;
        V.push_back(val);
    }
    
    cin >> pos; 
    
    V.erase(V.begin()+pos-1); 
    
    cin >> rBegin >> rEnd; 
    
    V.erase(V.begin()+rBegin-1, V.begin()+rEnd-1);
    
    cout << V.size() <<endl;
    
    for (vector<int>::iterator iter = V.begin();  iter != V.end(); iter++){
        cout << *iter << " "; 
    }

    return 0;
}
 