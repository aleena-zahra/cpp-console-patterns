//Aleena Zahra 23i-2514 BDS-2B OOP ASSIGNMENT 2
#include <iostream>
using namespace std;
void print(int starCount,int spaceCount){
    if (starCount <= 0 && spaceCount <= 0){
        return;
    }
    else if(starCount <= 0){
        cout << " ";
        print( starCount,spaceCount-1);
    }
    else{
    cout << "*";
    print(--starCount,spaceCount);
    }

}

void upperHalf(int count, int topRow){
    if (topRow == 0 || topRow < 0){
        return;
    }
    print(0,topRow-1);
    print(1,0);
    print(0,count);
    print(1,0);
    cout << endl;
    upperHalf(count + 2, --topRow);
}

void lowerHalf(int count, int bottomRows, int space = 1)
{
    if (bottomRows == 0 || bottomRows < 0)
{
        return;
    }
    print(0,space);
    print(count,0);
    cout << endl;
    lowerHalf(count - 2, bottomRows - 1, ++space);

}

int main() {
    int count, topRows, bottomRows;
    cout << "count: ";
    cin >> count;
    cout << "TopRows: ";
    cin >> topRows;
    cout << "BottomRows: ";
    cin >> bottomRows;

    //first line 
    print(0,topRows - 1);
    print(count,0);
    cout << endl;
    upperHalf(count, topRows - 1);
    if (count % 2 == 0){
        lowerHalf(count + topRows + 1, bottomRows);
    }
    else {
        lowerHalf(count + topRows, bottomRows);
    }

    return 0;
}
