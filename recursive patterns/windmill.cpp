//Aleena Zahra 23i-2514 BDS-2B OOP ASSIGNMENT 2
#include<iostream>
using namespace std;
void printPattern(int num, int i, int j){
    if(i<=num*2){
        if(j<=num*2){
            if(i==1 || i==num || i==num*2 || j==1 || j==num || j==num*2){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if(i==j){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if(i+j==2*num + 1){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if(i>j && i<num && j<num){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if(j>i && i<num && j>num && (i+j<2*num + 1)){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if( i>j && i>num && j<num && (i+j>2*num + 1)){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else if(j>i && i>num && j>num){
                cout<<"* ";
                printPattern(num,i,j+1);
            }
            else{
                cout<<"  ";
                printPattern(num,i,j+1);
            }
        }
        else{
            cout<<endl;
            printPattern(num,i+1,1);
        }
    }
    else return;
    
}
int main(){
   int num=0;
   cout<<"enter a number:\t";
   cin>>num;
   if(num%2==0){
    num+=1;
   }
   printPattern(num,1,1);
   return 0;
}
