#include<iostream> 
using namespace std;

  
int sum_from_to(int x, int y){
int total;
if(x<y){
  while(x<=y){
total=total+x;
x++;
}
}
return total;
}



int main(){
int first,last,temp;
cout<<"Enter the First value: ";
cin>>first;
cout<<"Enter the last value: ";
cin>>last;
   
if(first>last){
temp=last;
last=first;
first=temp;
 }
cout<<"Sum of number from first to last is : "<<sum_from_to(first,last)<<endl;






return 0;
}
