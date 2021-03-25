#include <iostream>

using namespace std;

int main()
{
    char s;
    cout << " Enter char: ";
    cin >> s;

    if (s == 'A' || s == 'a' || s == 'E' || s == 'e' || s == 'I' || s == 'i' || s == 'O' || s == 'o' || s == 'U' || s == 'u')
    {
        cout << " The entered char i vowel " << endl;
    }
    else if (s != 'A' || s != 'a' || s != 'E' || s == 'e' || s != 'I' || s != 'i' || s != 'O' || s != 'o' || s != 'U' || s != 'u')
    {
        cout << " The entered char is consonant " << endl;
    }

    system("PAUSE");
    return 0;
}


