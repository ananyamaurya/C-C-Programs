#include <iostream>
using namespace std;
int main() {
    string key;
    cout<<"Enter the Key :: ";
    cin>>key;
    string plaintext;
    cout<<"\n Enter the Plaintext :: ";
    cin>>plaintext;
    int j=0;
    char cipher[plaintext.length()];
    for(int i=0;i<plaintext.length();i++){
        if(isupper(plaintext[i])){
             int x = (int) plaintext[i] - 65;
             int y = (int) key[j] - 97;
            int z= x+y;
            if(z>26){
                z=z%26;
            }
            cipher[i]=(char) (65+ z);
        }else if(islower(plaintext[i])){
            int x = (int) plaintext[i] - 97;
            int y = (int) key[j] - 97;
            int z= x+y;
            if(z>26){
                z=z%26;
            }
            cipher[i]=(char) (97 + z);
        }
        if(j!=key.length()-1){
            j++;
        }else {
            j = 0;
        }
    }
    cout<<"\n\n\t\t"<<cipher;
}