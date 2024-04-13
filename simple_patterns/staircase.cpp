#include<iostream>
using namespace std;
   int main(){
   
   int i,j,k,l,m,n;
   cout<<"Enter value of n\n";
   cin>>n;
   
   for(i=1;i<=n;i++){
   
        for(j=1;j<=n;j++){
        
         cout<<"*";
         }
         cout<<endl;
 
        for(k=1;k<=n-1;k++){ 
       
            for(l=i*(n-1);l>=1;l--)
               cout<<" ";
               cout<<"*"<<endl;
        
          
            
       }
       for(m=i*(n-1);m>=1;m--)
               cout<<" ";
   }
   return 0;
 }
    
