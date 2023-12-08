#include<iostream>
using namespace std;

int main(){
    int i=0,E=0,O=0,r=1;
    int num[100000];
    while (r!=0) {
    cout << "Enter an integer: ";
    cin>>num[i];
    if(num[i]==0){
        r=0;
    }
    if(num[i]%2==0){
        E++;
    }
    else{
        O++;
    }
    i++;
    }
    cout << "#Even numbers = ";
    cout<< E;
    cout << "#Odd numbers = ";
    cout<<O;
    return 0;
}
