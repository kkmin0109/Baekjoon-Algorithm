#include <iostream>
using namespace std;

int main()
{
    int A,B;
    int digit_in_one, digit_in_ten, digit_in_hundred;


    cin >> A;
    cin >> B;

    digit_in_one = B%10;
    digit_in_ten = ((B-digit_in_one)%100)/10 ;
    digit_in_hundred = ((B-digit_in_ten-digit_in_one)%1000)/100;

    cout << A*digit_in_one << endl << A*digit_in_ten
    << endl << A*digit_in_hundred << endl << A*B;

    return 0;

}