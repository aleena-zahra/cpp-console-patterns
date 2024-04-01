//Aleena Zahra 23i-2514 BDS-2B OOP ASSIGNMENT 2
#include<iostream>
using namespace std;
void printBoard(int i, int j, int num, char currentColor, char whiteChar) {
    if (i < num) {
        if (j < num) {
            if (( i % (num-1) == 0 ) || ( j % (num-1) == 0 )) {
                cout<<"*";
                
            }
            cout << currentColor << ' ';
            printBoard(i, j + 1, num, (currentColor == ' ') ? whiteChar : ' ', whiteChar);
        } 
        else {
            cout << endl;
            printBoard(i + 1, 0, num, (currentColor == ' ') ? whiteChar : ' ', whiteChar);
        }
    }
    else return;
}
void drawChessBoard(char symbol,char space,int j, int i,int num){
    if (i < num*num) {
        if (j < num*num ){
            if ((i / num) % 2 == (j / num) % 2) {
                cout<<'*';
                drawChessBoard(symbol,space,j+1,i,num);
                }
            else if (( i % (num) == 0 ) || ( j % (num) == 0 ) || (j==num*num-1) || ( i==num*num-1)) {
                cout<<'*';
                drawChessBoard(symbol,space,j+1,i,num);
            }
            else {
                cout<<' ';
                drawChessBoard(symbol,space,j+1,i,num);
            }
        }
        else{
            cout<<endl;
            drawChessBoard(symbol, space, 0,i+1, num);

        }         
    }
    else return;
}


        
    
int main(){
    int num=6;
    char symbol='*';
    char space=' ';
    cout<<"Enter a number\t";
    cin>>num;
    if(num<6){
        cout<<"enter num greater or equal to 6\n";
        cin>>num;
    }
    if(num%2!=0){ 
        num+=1;
        }
    // cout<<"Enter a symbol\t";
    // cin>>symbol;
    cout<<"Type w for white to go first, type b for black to go first\n";
    char goingFirst;
    cin>>goingFirst;
    if (goingFirst != 'w' && goingFirst != 'b') {
        cout << "you dont seem to follow directions well.\n";
        cout<<"Type w for white to go first, type b for black to go first\n";
        char goingFirst;
    }
    if(goingFirst=='b'){
        //symbol=' '
        //space=symbol
        drawChessBoard(space,symbol,0,0,num);
        //printBoard(0, 0, num, symbol, space);
   }
   else{
        drawChessBoard(symbol,space,0,0,num);
        //printBoard(0, 0, num, space, symbol);
        //symbol=symbol, space=space
    }
   // drawChessBoard(symbol,goingFirst,0,0,num);
}
