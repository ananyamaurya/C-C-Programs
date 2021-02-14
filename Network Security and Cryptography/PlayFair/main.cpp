#include <iostream>
using namespace std;
int w,x,y,z;
char keymatrix[5][5] = {
        {'p','l','a','y','f'},
        {'i','r','e','x','m'},
        {'b','c','d','g','h'},
        {'k','n','o','q','s'},
        {'t','u','v','w','z'}
};
void firstletter(char c){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(c==keymatrix[i][j]){
                w=i;
                x=j;
            }
        }
    }
}
void secondletter(char c){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(c==keymatrix[i][j]){
                y=i;
                z=j;
            }
        }
    }
}
int main() {
    int len,t,ilen;
    cout<<"Enter the length of message :: ";
    cin>>len;
    char mess[len];
    cin>>mess;
    char c[2*len];
    ilen=len;
    int i=0;
    for(int j=0;j<len;j=j+2){
        if(mess[j]==mess[j+1])
        {   ilen++;
            c[i]=mess[j];
            c[i+1]='x';
            i=i+2;
            j=j-1;
            continue;
        }
        if(mess[j]!=mess[j+1])
        {   c[i]=mess[j];
            c[i+1]=mess[j+1];
            i=i+2;
            continue;
        }
    }
    len=ilen;
    t=len;
    if(len%2!=0){
        len=len+1;
    }
    if(t%2!=0){
        mess[len-1]='x';
    }
    char cipher[len];
    char message[len];
    for(int i=0;i<len-1;i++){
        message[i]=c[i];
    }
    for(int i=0;i<len;i=i+2){
        if(message[i]=='j'){
            firstletter('i');
        }
        if(message[i+1]=='j'){
            secondletter('i');
        }
        firstletter(message[i]);
        secondletter(message[i+1]);
        cout<<"("<<w<<","<<x<<")  ("<<y<<","<<z<<")"<<endl;
        if(w==y){
            if(x+1>4){
                x=x%5;
            }
            if(z+1>4){
                z=z%5;
            }
            cipher[i]=keymatrix[w][x+1];
            cipher[i+1]=keymatrix[y][z+1];
        }else if(x==z){
            if(w+1>4){
                w=w%5;
            }
            if(y+1>4){
                y=y%5;
            }
            cipher[i]=keymatrix[w+1][x];
            cipher[i+1]=keymatrix[y+1][z];
        }else{
            cipher[i]=keymatrix[w][z];
            cipher[i+1]=keymatrix[y][x];
        }
    }
    for(int i=0;i<len;i++){
        cout<<cipher[i];
    }
    return 0;
}