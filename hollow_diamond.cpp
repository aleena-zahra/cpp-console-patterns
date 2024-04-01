#include<iostream>
using namespace std;
int main(){
    int n=21;
    if(n%2!=0){
        n++;
    }
    cout<<"Diamond pattern for "<<n<<" is:\n";
    for(int i=0; i<((n+1)/2 );i++){
        for(int j=0; j<((n+1)/2 )-i;j++){
            cout<<'*';
        }
        
        for(int s = 2*i; s>0 ; s-- ){
            cout<<" ";
        }
        for(int j=0; j<((n+1)/2 )-i;j++){
            cout<<'*';
        }
        cout<<endl;
        
    }
    for (int i = ((n + 1) / 2) - 1; i >= 0; i--) {
        for (int j = 0; j < ((n + 1) / 2) - i; j++) {
            cout << '*';
        }
        for(int s = 2*i; s>0 ; s-- ){
            cout<<" ";
        }
        for (int j = 0; j < ((n + 1) / 2) - i; j++) {
            cout << '*';
        }
    cout << endl;
}

    
    return 0;
}
       
