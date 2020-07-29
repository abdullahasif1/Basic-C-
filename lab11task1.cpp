#include<iostream>
using namespace std;

int hms_to_sec(int a,int b,int c){
     int total;
     total=(a*60*60)+(b*60)+c;
return total;
}




int main(){
int h,m,s;
cout<<"Enter Hours: ";
cin>>h;
cout<<"Enter Minutes: ";
cin>>m;
cout<<"Enter Seconds: ";
cin>>s;


if(m<60 && m>=0 && s<60 && s>=0){
cout<<"Total Seconds: "<<hms_to_sec(h,m,s)<<endl;
}
else{
cout<<"wrong Input";
}
return 0;
}
