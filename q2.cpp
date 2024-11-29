#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "n: ";
    int n,rev = 0;
    cin >> n;

    if(n == 0){
        cout << "Zero";
        return 0;
    }
    while(n!=0){
        int last_digit = n%10;
        rev = rev*10 + last_digit;
        n /= 10;
    }

    while(rev!=0){
        int last_digit = rev%10;
        switch (last_digit) {
            case 0: cout << "Zero "; break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
        }
        rev/=10;
    }
    
}
