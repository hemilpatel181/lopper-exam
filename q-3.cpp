#include<iostream>
using namespace std;

int main(){
    int i , start , end , sum = 0;

    cout << "Enter the starting number : ";
    cin >> start;

    cout << "Enter the ending number : ";
    cin >> end;

    for( i = start ; i <= end ; i++){
        if( i % 2 == 0){
            sum = sum + i;
        }
    }

    cout << "Sum of all even number is : " << sum << endl;

    return 0; 

}