#include<iostream>
using namespace std;

int main(){
int x,y,xnew,ynew;
string d1,d2;
cout<<"Enter current X-coordinate: ";
cin>>x;
cout<<"Enter current Y-coordinate: ";
cin>>y;
cout<<"Enter the direction of x-coordinate in which ship neesds to move: ";
cin>>d1;
cout<<"Enter the direction of y-coordinate in which ship neesds to move: ";
cin>>d2;
cout<<"X = "<<x<<",  Y = "<<y<<endl;

if(d1=="East"){
   xnew=x+1;
cout<<"Updated-x = "<<xnew<<endl;
}
else if(d1=="West"){
   xnew=x-1;
cout<<"Updated-x = "<<xnew<<endl;
}

if(d2=="North"){
   ynew=y+1; 
cout<<"Updated-y = "<<ynew<<endl;
}
else if(d2=="South"){
   ynew=y-1;
cout<<"Updated-x = "<<ynew<<endl;
}
else{
cout<<"Direction is case-sensitive. Direction wrong"<<endl;

}
return 0;
}
