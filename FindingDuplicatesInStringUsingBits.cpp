#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

string A;
cout<<"Enter the word: ";
cin>>A;


for (int i = 0; A[i]!='\0'; i++)  // convert A[i] to lowercase
    A[i] = tolower(A[i]);

long int H=0;
int x;

for(int i=0; A[i]!='\0'; i++){
    x=1;
    x= x << A[i]-97;
    if((x & H) > 0) // Masking to see if the letter has been already found
        cout<<A[i]<<" is duplicate"<<endl;
    else 
        H= x | H; //Merging operation to store that we have found that particular letter
}

return 0;
}