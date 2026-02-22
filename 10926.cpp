#include <iostream>
#include <string> // string 사용을 위해 포함하는 것이 좋습니다.
using namespace std;

int main()
{
    string id;
    
    // 1. 아이디를 입력받습니다.
    cin >> id;

    // 2. 입력받은 아이디 뒤에 ??!를 붙여서 출력합니다.
    cout << id << "??!" << endl;

    return 0;
}