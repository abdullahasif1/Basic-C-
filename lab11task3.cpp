#include<iostream>
using namespace std;




int main(){
    
    int i, k=0;
    char arr[100];
    cin.getline(arr,100);
    for(i=0;arr[i]!='\0';i++){
    
        k++;

    }
    cout<<"Reverse is -->";

    for(i=k-1;i>=0;i--){
        cout<<arr[i];
    }




return 0;
}
