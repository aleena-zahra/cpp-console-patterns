#include<iostream>
using namespace std; 
int main(){
    int rows;
    cout<<"Enter rows\n";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for (int j=0; j<rows; j++ ){
            if(j>=i){
                cout<<j-i;
            }
            else if(i>j){
                cout<<rows-j;
            }
        }
        cout<<"\n";
    }
    return 0;
}