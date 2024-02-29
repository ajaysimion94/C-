#include<iostream>
using namespace std;
void fibo(int n){
    if(n<=0){
        cout<<0<<endl;
    }
    else{
        int f=0;
        int x=1;
        int e=0;
        cout<<f<<endl<<x<<endl;
        for(int i=0;i<n;i++){
            e=f+x;
            f=x;
            x=e;
            cout<<e<<endl;
        }
    }
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    fibo(n);
}
