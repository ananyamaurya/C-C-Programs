#include <iostream>
using namespace std;
int main() {
    int len,t;
    string s;
    cout<<"Enter the Text :: ";
    getline(cin,s);
    len=s.length();
    char cipher[len];
    char plain[len];
    for(int i=0;i<len;i++){
        if(islower(s[i])){
            int x= (int)s[i];
            x=x+3;
            if(x>122)
                x=96+(x%122);
            cipher[i]=(char)x;
        }else if(isupper(s[i])){
            int x= (int)s[i];
            x=x+3;
            if(x>90)
                x=64+(x%90);
            cipher[i]=(char)x;
        }else {
            cipher[i]=s[i];
        }
    }
    cout<<"Cipher Text :: "<<cipher<<endl<<endl;
    cout<<"\t\t\t Decryption";
    cout<<"\nCipher Text :: ";
    for(int i=0;i<len;i++){
        if(islower(cipher[i])){
            int x= (int)cipher[i];
            x=x-3;
            if(x<97)
                x=122-(97-x)+1;
            plain[i]=(char)x;
        }else if(isupper(cipher[i])){
            int x= (int)cipher[i];
            x=x-3;
            if(x<65)
                x=90-(65-x)+1;
            plain[i]=(char)x;
        }else {
            plain[i]=cipher[i];
        }
    }
    cout<<"Plain Text :: "<<plain;


}