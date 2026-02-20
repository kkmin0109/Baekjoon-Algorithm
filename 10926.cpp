#include <iostream>
using namespace std;

int main()
{
    string name_1, name_2, new_id;
    name_1 = "joonas";
    name_2 = "baekjoon";

    cin >> new_id;

    if (new_id == name_1 || new_id == name_2)
    {
        new_id = new_id + "??!";
    }
    
    cout << new_id;

    return 0;

}