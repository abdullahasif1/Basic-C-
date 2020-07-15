#include<iostream>
using namespace std;
int main(){
int x[3],min,loc,temp;
cout<<"Enter three numbers: ";
for(int i=0;i<3;i++){
   cin>>x[i];

}

    for(int j=0;j<2;j++){
          min=x[j];
          loc=j;



        for(int k=j+1;k<3;k++){
              
                    if(x[k]<min){
                          min=x[k];
                         loc=k;

}
}

     temp=x[j];
     x[j]=x[loc];
     x[loc]=temp;

}

cout<<"Sorted numbers are: ";
for(int z=0;z<3;z++){
cout<<x[z]<<"    ";
}





return 0;
}
