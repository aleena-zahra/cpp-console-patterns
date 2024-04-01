#include<iostream>
using namespace std; 
int main(){
    int rows;
    cout<<"Enter rows\n";
    cin>>rows;
    int slash1= rows/2;
    int slash2= rows/2;
    for(int i=1; i<=rows; i++){
        for (int j=1; j<=rows ; j++){
            if(i==1 || i==rows){
                cout<<"*";
            }
            else if(j==(rows-1)/2){
                cout<<"|";
            }
            else {
                if (j == slash1 ){
                cout << "/";
                }
                if ( j == slash2){
                    cout << "\\";
                }
                else
                cout<<" ";
            }
            
        }
        cout<<"\n";
        if(i==rows/2){
                slash1+=rows-1;
                slash2-=rows-1;
            }
        slash1--;
        slash2++;
    }
    return 0;
}