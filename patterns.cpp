#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
//upper half
for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
        cout<<"*";
    }
    
        for(int col=0;col<((2*n)-(2*row+2));col++){
            cout<<" ";
        }
    
        for(int col=0;col<row+1;col++){
        cout<<"*";
        }
         cout<<"\n";
    }
   


    
//lower half
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        for(int col=0;col<(2*row+1)-1;col++){
           cout<<" "; 
        }
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<"\n";
    }
    



    
   

    
    // for (int i = 0; i < n; ++i) {
        
    //     for (int j = 0; j < n; ++j) {
            
    //         if (i == 0 || i == n - 1 || i == n / 2) {
    //             cout << "*";
    //         } else if (i < n / 2 && j == 0) {
    //             cout << "*";
    //         } else if (i > n / 2 && j == n - 1) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
        
    //     cout << endl;






    return 0;

}

  