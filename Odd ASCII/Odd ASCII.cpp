#include <iostream>
#include<string>
using namespace std;

void countOdd(string str);


int main()
{
    string str;
    string* pstr;
    pstr = &str;

    cout << "Please Enter a string: ";
    getline(cin, str);



    countOdd(*pstr);

    return 0;
}

void countOdd(string str)
{
    int len = str.length();
    int count = 0;


    for (int i = 0; i < len; i++)
    {

        if (str[i] % 2 != 0)
        {
            count++;
        }

    }

    cout << "The number of times an ODD ASCII came out is: " << count << endl;
}



