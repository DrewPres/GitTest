#include <iostream>

using namespace std;
void calcualte(int inNum);
void sum(int inNum);

int main()
{
    int inNum = 0;
    cout << "Enter number" << endl;
    cin >> inNum;
    calcualte(inNum);
    sum(inNum);

}

void calcualte(int inNum){
    int total = 0;
    for(int i = 1; i < inNum +1; i++){
        total = i + total;
    }
    cout << total;
}
void sum (int inNum){
    int total = 0;
    for(int i = 1; i < inNum +1; i++){
        total = i * total;
    }
    cout << total;
}
