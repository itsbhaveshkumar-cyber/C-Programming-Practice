// C++ program to convert String to Integer using typecast operator overloading.

#include <iostream.h>
#include<conio.h>
#include <string.h>

class StringToInt
{
private:
    char *stringValue;
public:
    StringToInt(const char *str)
    {
	strcpy(stringValue,str);
    }

    operator int()
    {
	int num = 0, i = 0;

	while(stringValue[i] != NULL)
	{
		num = (num * 10) + (stringValue[i] - '0');
		i++;
	}

	return num;
    }

    void display()
    {
	cout << "String value: " << stringValue << endl;
    }
};

int main()
{
    clrscr();

    char *s1 = "123";

    StringToInt stringNumber(s1);

    int convertedNumber = (int)stringNumber;

    cout << convertedNumber << endl;

    cout<<s1+10<<endl;
    cout<<convertedNumber+10<<endl;

    getch();

    return 0;
}
