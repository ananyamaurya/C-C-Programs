#include <iostream>
#include <math.h>

using namespace std;
bool checkPrime(int n){
    for(int i=2;i<n/2;i++){
        return  (n % i != 0);
    }
}
int findE(int n){
    for(int i=2;i<n/2;i++){
        if(n%i!=0){
            return i;
        }
    }
}
int findD(int e,int pn){
    for(int i=2; i<pn;i++){
        if((i*e)%pn ==1){
            return i;
        }
    }
}
int main() {
    long long int p,q,d,e,m,c,fn,pn;
    L1: cout<<"Enter two Prime No.";
        cin>>p;
        cin>>q;
        if(checkPrime(p) && checkPrime(q)){
            fn = p*q;
            pn = (p-1) * (q-1);
            e = findE(pn);
            d = findD(e,pn);
            cout<<"Keys are :: "<<e<<" "<<d;
            m=88;
            cout<<"Message is &d :: "<<m;
            c=pow(m,e);
            c=c%fn;
            cout<<"\n"<<c;88j
        }
        else{
            goto L1;
        }
}