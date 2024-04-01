#include<iostream>
using namespace std;
void Fibonacci(int firstNumber, int secondNumber,int numberOfTerms){
     if (numberOfTerms == 0) {
        return;
    } else {
        int temp=secondNumber+firstNumber;
        cout<<temp<< " ";
        Fibonacci(secondNumber,temp,numberOfTerms-1);
    }
}
int main() {
    // Example usage:
    int firstNumber = 0;
    int secondNumber = 1;
    int numberOfTerms;
    cout<<"Enter Number of Terms to compute to\n";
    cin>>numberOfTerms;
    cout<<"0 1 ";
    Fibonacci(firstNumber, secondNumber,numberOfTerms);
    return 0;
}