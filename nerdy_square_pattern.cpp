#include<iostream>
using namespace std; 
int main(){
    int rows;
    cout<<"Enter rows\n";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for (int j=0; j<rows; j++ ){
            if(j==0){
                cout<<i+1;
            }
            else if(j>i){
                cout<<rows-j;
            }
            else
                cout<<i+1+j;
        }
        cout<<"\n";
    }
    return 0;
}