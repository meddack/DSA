#include<iostream>
using namespace std;

int count(int n){
    int count=0;
    while(n){
        count++;
        n= n/10;
    }
    return count;

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << count(n) << endl;
    return 0;
}



