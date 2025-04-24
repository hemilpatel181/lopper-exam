#include<iostream>
using namespace std;

int main(){
    int i , n;
    bool flag;
    cout << "Enter the number : ";
    cin >> n;
   
    for(i = 2 ; i < 7 ; i++){
        if( n % i == 0){
            cout << "it's not a prime number" << endl;
        }else{
            cout << "it's a prime number" << endl;
        }
    }

    return 0;

}