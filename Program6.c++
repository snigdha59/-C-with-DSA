//Printing number Triangle   in rectangular style

#include<iostream>
using namespace std ;
int main() {
    int n=5;
    
    for(int i=1; i<=n; i++) {
          int b=i+1;
        for(int j=1; j<b; j++) {
            cout << b;
        }
        cout<<endl;
    }
    return 0;
}