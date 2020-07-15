#include<iostream>
using namespace std;

int triangle(int l, int m, int n){
if(l==m && l==n){
cout<<"It's an equilateral triangle";

}
else if(l==m || l==n || m==n){
cout<<"It's an Isosceles triangle";
}
else{
cout<<"Its Scalene Triangle";
}
return 0;

}

int shape(int e, int f, int g, int h){
if(e==f && e==g && e==h){
cout<<"It's a square";
}
else if(e==f && g==h || e==g && f==h || e==h && g==f){
cout<<"It's a rectangle";
}
else{
cout<<"Invalid Input, try again";

}

return 0;

}






int main(){

int x,a,b,c,d;

cout<<"Enter the number of sides";
cin>>x;

if(x==3){

cout<<"Its a triangle "<<endl;;  
cout<<"Enter the lenght of every side";
cin>>a;
cin>>b;
cin>>c;
triangle(a,b,c);

}
else if(x==4){
cout<<"It's a square or a rectangle"<<endl; 
cout<<"Enter the length of all sides";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
shape(a,b,c,d);

}

return 0;
}
