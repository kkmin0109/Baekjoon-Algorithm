#include <iostream>
using namespace std;

int main()
{
    int A, B;
    double C;

    cin >> A >> B;
    
    C = (double) A / B;

    // --- 출력 설정 추가 ---
    cout.fixed;          // 소수점 아래 자릿수를 고정하겠다는 의미
    cout.precision(12);  // 소수점 아래 12자리까지 보여달라는 의미 (9자리 이상이면 안전)
    // --------------------

    cout << C;

    return 0;
}