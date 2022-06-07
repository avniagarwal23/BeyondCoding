#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

   int n; cin>>n;
   int target; cin>>target;
   vector<int> a(n);
   for(auto &i : a){
       cin>>i;
   }
   bool found = false;
   sort(a.begin(),a.end());
   for(int i=0;i<n;i++){
       int lo = i+1;
       int hi = n-1;
       while (lo<hi)
       {
           int current = a[i] + a[lo] + a[hi];
           if(current==target){
               found = true;
           }
           else if(current<target){
               lo++;
           }
           else if(current>target){
               hi--;
           }
       }
   }
   if(found==true){
       cout<<"True";
   }
   else{
       cout<<"False";
   }

return 0;
}