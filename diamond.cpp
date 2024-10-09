#include <iostream>
using namespace std;


int main(){
    int i, j, rows = 8;
    //upper pyramid
    for  (i= 0; i<= rows; i++){
        for (j= 1; j<= rows- i; j++){

            cout<< ' ';
        }
        for (j= 1; j<= 2*i-1; j++){
            cout<< '#';
        }
        cout<< "\n";
    }


    //lower pyramid
    for (i = rows-1; i>=1; i--){
        for (j=1; j<=rows-i; j++){
            cout << ' ';
        }
        for (j=1; j<=2*i-1; j++){
            cout<<'%';
        }
        cout<< "\n";
    }
    return 0;
    }