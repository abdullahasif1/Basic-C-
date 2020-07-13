#include<iostream>
using namespace std;
int main (){
string x;
cout<<"Type todays date with the format ddmmyyyy : "<<endl;
cin>>x;
cout<<x.substr(0,2)<<"/"<<x.substr(2,2)<<"/"<<x.substr(4,4);



return 0;
}
