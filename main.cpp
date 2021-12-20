#include <iostream>
#include <string.h>
using namespace std;

void encryption()
{
    int key , i , characters = 1000;
    char plaintext[characters];
    char copy[characters];
    system("color 3");
    cout<<"Enter the key number:"<<endl<<">>";
    cin>>key;
    cout<<"Enter the plain text you want to encryption:"<<endl<<">>";
    cin>>plaintext;
    characters = strlen(plaintext);

    for(i=0; i<characters;i++)
        copy[i] = plaintext[i];

    //this is the encryption code:
    for(i=0; i<characters; i++)
    {
        if(plaintext[i] == '.')        //Substitute the distance" " by a point"."
            plaintext[i]='.';
        else
            plaintext[i]+= key % 26;
    }
    system("cls");
    system("color a");
    cout<<endl;
    cout<<"******************************************************************"<<endl
        <<"------------------------------------------------------------------"<<endl;
    cout<<"the key number is: "<<key<<endl;
    cout<<"the Plain text is: ";
    for(i=0; i<characters; i++)
        cout<<copy[i];
    cout<<endl;
    cout<<"the Cipher text is: ";
    for(i=0; i<characters; i++)
        cout<<plaintext[i];
    cout<<endl<<"------------------------------------------------------------------"<<endl
        <<"******************************************************************"<<endl<<endl<<endl;

}

////////////////////////////////////////////////////////////////////////////////////////////

void decryption()
{
    int key , i , characters = 1000;
    char ciphertext[characters];
    char copy[characters];      //this is copy Ciphertext
    system("color 3");
    cout<<"Enter the key number:"<<endl<<">>";
    cin>>key;
    cout<<"Enter the Cipher text you want to decryption:"<<endl<<">>";
    cin>>ciphertext;
    characters = strlen(ciphertext);
    for(i=0; i<characters;i++)
        copy[i] = ciphertext[i];

    //this is the decryption code:
    for(i=0; i<characters; i++)
    {
        if(ciphertext[i] == '.')        //Substitute the distance" " by a point"."
            ciphertext[i]='.';
        else
            ciphertext[i]-= key % 26;
    }
    system("cls");
    system("color a");
    cout<<endl;
    cout<<"******************************************************************"<<endl
        <<"------------------------------------------------------------------"<<endl;
    cout<<"the key number is: "<<key<<endl;
    cout<<"the Cipher text is: ";
    for(i=0; i<characters; i++)
        cout<<copy[i];
    cout<<endl;
    cout<<"the Plain text is: ";
    for(i=0; i<characters; i++)
        cout<<ciphertext[i];
    cout<<endl<<"------------------------------------------------------------------"<<endl
        <<"******************************************************************"<<endl<<endl<<endl;
}
int main()
{
    short option;
    system("color 6");
    cout<<"\t\tThe Option is:"<<endl;
    cout<<"1- encryption."<<endl;
    cout<<"2- decryption."<<endl;
    cout<<"Enter the (1 or 2):"<<endl<<">>";
    cin>>option;
    system("cls");
    if(option == 1)
        encryption();
    else if(option == 2)
        decryption();
    else
        cout<<"The Option you selected does not exist. try again."<<endl<<endl;
    return 0;
}
