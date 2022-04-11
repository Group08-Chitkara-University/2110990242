#include<iostream>
using namespace std;
//To find power of a number
int power(int num1, int num2) {
    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }
    return ans;
}
int main()
{
    int c , d;
    cin>> c >> d;
//last comment
    int answer = power(c,d);
    cout << " answer is " << answer << endl;
    return 0;
}   
