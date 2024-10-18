#include <iostream>
using namespace  std;
int main()
{
    cout << "The traffic light!" << endl;
    int Thetrafficlight;//переменная
    cin >> Thetrafficlight;
    if (Thetrafficlight < 0)//если меньше нуля
    {
        cout << "GO" << endl;
    }

    else//иначе
    {
        cout << "Stop" << endl;
    }
    /* code */
    return 0;
}

