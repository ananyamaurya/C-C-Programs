#include <iostream>
using namespace std;
int key[2][2]={
        {17,18},
        {2,19}
};
int some[2];
void findCipher(int y,int z){
    some[0]= (key[0][0]*y + key[0][1]*z)%26;
    some[1]= (key[1][0]*y + key[1][1]*z)%26;
}
int main() {
    int len,t;
    cout<<"Enter the length of message :: ";
    cin>>len;
    t=len;
    if(len%2!=0){
        len=len+1;
    }
    char s[len];
    cout<<"\nEnter the message :: ";
    cin>>s;
    if(t%2!=0){
        s[len-1]='x';
    }
    char cipher[len];
    for(int i=0;i<len;i+=2){
        findCipher((int)s[i],(int)s[i+1]);
        cipher[i]=(char)(96+some[0]);
        cipher[i+1]=(char)(96+some[1]);
    }
    cout<<"\nCipher Text is :: "<<cipher;
}