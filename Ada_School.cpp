#include<iostream>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       int m,n;
       cin>>m>>n;
       int result = m*n;
       if(m*n%2==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }

return 0;
}