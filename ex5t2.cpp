#include<iostream>
using namespace std;


int kashmir(int x){
    int cost;
    cost=(4500*x) + (15000*x);
    cout<<cost;
}

int hunza(int x){
   int costt;
   costt=(5500*x) + (25000*x);
   cout<<costt;
}



int main(){
  int x;
  string des;
    cout<<"Enter your Destination: ";
    cin>>des;
    cout<<"Enter the number of person : ";
    cin>>x;

if(des=="kashmir"){
      kashmir(x);

}
else if(des=="Hunza" || des=="hunza"){
    hunza(x);
}

return 0;
}
