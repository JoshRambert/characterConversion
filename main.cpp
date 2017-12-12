#include <iostream>

using namespace std;

int main()
{
    //Display each of these constants in decimal hexadecimal and as a character using cout
    const int DEC_NUM = 136;
    const int HEX_NUM = 0x6a;
    const char LETTER = '!';

    //display the "Decimal number" in Hexadeciaml, decimal and letter form
    cout << "The Decimal number is " << DEC_NUM << endl;
    cout << "The Hexadecimal value for " << DEC_NUM << " is " << hex << DEC_NUM << endl;
    //convert decimal to a character for output
    char dec_LET = (int)DEC_NUM;
    cout << "Decimal number " << dec << DEC_NUM << " in character form is " << dec_LET << endl;

    //create space in between each value
    cout << "---- " << endl;

    //Display the "Hexadecimal" value in decimal, hexadecimal and character form
    cout << "The Hexadecimal value is " << hex << HEX_NUM << endl;
    cout << "The decimal number for " << HEX_NUM << " is " << dec << HEX_NUM << endl;
    //convert hexadecimal to character for output
    char hex_LET = (int)HEX_NUM;
    cout << "The character form for " << hex << HEX_NUM << " is " << hex_LET << endl;

    //Create another gap in between the values
    cout << "---- " << endl;

    //Display the "Letter f" in hexadecimal, decimal and its character form
    cout << "The character is " << LETTER << endl;
    //convert letter to int value
    int let_NUM = (char)LETTER;
    cout << "The Decimal value for " << LETTER << " is " << dec << let_NUM << endl;
    cout << "The Hexadecimal value for " << LETTER << " is " << hex << let_NUM << endl;

    return 0;
}
