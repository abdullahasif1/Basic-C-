#include<iostream>
using namespace std;
int main (){
int x;
cout<<"Enter the vale of AQI to find the pollution level in Air"<<endl;
cin>>x;
if(x>300){
cout<<"Hazardous";
}
else if(x>200 && x<=300){
cout<<"Very Umhealthy";
}
else if(x>150 && x<=200){
cout<<"Unhealthy";
}
else if(x>100 && x<=150){
cout<<"Umhealthy for sensitive groups";
}
else if(x>50 && x<=100){
cout<<"Moderate";
}
else{
cout<<"Good";
}

return 0;
}
