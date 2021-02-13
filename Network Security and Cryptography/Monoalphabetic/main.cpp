#include <iostream>
using namespace std;
int main(){
    string s;
    int len;
    char Capital[26] ={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    char Small[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    cout<<"Enter the Text :: ";
    cin>>s;
    len= (int)s.length();
    char cipher[len];
    char plain[len];
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            int x = (int)s[i] - 65;
            cipher[i]= Capital[x];
        }else if(islower(s[i])){
            int x = (int)s[i] - 97;
            cipher[i]=Small[x];
        }else{
            cipher[i]=s[i];
        }
    }
    cout<<cipher;
    cout<<"\n\n\t\t Decryption\n\n";
    for(int i=0;i<len;i++){
        char c= cipher[i];
        if(isupper(c)){
            for(int j=0;j<26;j++){
                if(c==Capital[j]){
                    int x=j;
                    plain[i]=(char) 65+x;
                }
            }
        }else if(islower(c)){
            for(int j=0;j<26;j++){
                if(c==Small[j]){
                    int x=j;
                    plain[i]=(char) 97+x;
                }
            }
        }else{
            plain[i]=cipher[i];
        }

    }
    cout<<plain;
}