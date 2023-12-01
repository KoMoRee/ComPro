#include<iostream>
using namespace std;

int main(){
    int i=1, e=0, o=0;
    
    while (i!=0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i!=0){
            if(i%2 == 0){
                e++;
            }else{
                o++;
            }
        }
    }
        cout << "#Even numbers = " << e << endl;
        cout << "#Odd numbers = " << o;
    
        return 0;
}