#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the pH value: ";
cin>>x;
 if(x==0){
cout<<"its brown";
}
else if(x==1){
cout<<"Castric Acid";
}
else if(x==2){
cout<<"Castric Acid and Lemon Juice";
}
else if(x==3){
cout<<"Orange Juice";
}
else if(x==4){
cout<<"Orange Juice and Tomato Juice";
}
else if(x==5){
cout<<"Tomato Juice and Black Coffee";
}
else if(x==6){
cout<<"Black Cofee and Milk";
}
else if(x==7){
cout<<"Milk and Distiled Water";
}
else if(x==8){
cout<<"Baking soda";
}
else if(x==9){
cout<<"Bakin Soda and Handmade Soap";
}
else if(x==10){
cout<<"Homemade Soap";
}
else if(x==11){
cout<<"Ammonia";
}
else if(x==12){
cout<<"Ammonia and Bleach";
}
else if(x==13){
cout<<"Bleach and Sodium Hydroxide";
}
else if(x==14){
cout<<"Sodium Hydroxide";
}
else{
cout<<"Entered pH value is incorrect";
}
return 0;
}
