#include<iostream>
#include<string.h>
using namespace std;
void primenum(int num){
    bool flag;
        if(num<2){
            cout<<"It's not a prime number";
        }
        else{
            for(int i=2;i<num;i++){
                if(num%i==0){
                    flag=true;
                }
                else{
                    flag=true;
                }
            }
        if(flag==false){
            cout<<"It's not a prime Number";
        }
        else{
            cout<<"It is a prime number";
        }
        }

    }
int main(){
    cout<<"Enter any number"<<endl;
    int n;
    cin>>n;
    primenum(n);
    return 0;

}