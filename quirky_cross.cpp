#include<iostream>
using namespace std; 
int main(){
    int rows;
    cout<<"Enter rows\n";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for (int j=0; j<rows ; j++){
            if(i==(rows-1)/2 && j==(rows-1)/2){
                cout<<"0";
            }
            else if(i+j==rows-1 || j==i){
                cout<<"*";
            }
            else if(i==(rows-1)/2 || j==(rows-1)/2){
                cout<<"#";
            }
            else
                cout<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}