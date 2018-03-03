#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int MAX, Size;
    cin >> MAX;
    Size = 0; 
    int arr[MAX]; 
    
    do {
        cin >> arr[Size];
        Size++;
    }while (Size != MAX);
    
    // Reverse of print order
    for (int i = MAX-1; i >= 0; i--){
        cout << arr[i] << " ";
   }
    
    return 0;
}
