// C++ program to convert Celsius to Fahrenheit and Back to
// Celsius using Typecast Overloading

#include <iostream.h>
#include<conio.h>

class Fahrenheit;

class Celsius
{
      private:
	double temp;
      public:
	Celsius()
	{
		temp = 0;
	}

	Celsius(double t)
	{
		temp = t;
	}

	operator Fahrenheit();

	void display()
	{
		cout << temp << " degrees Celsius" << endl;
	}
};

class Fahrenheit
{
      private:
	double temp;
      public:
	Fahrenheit()
	{
		temp = 0;
	}

	Fahrenheit(double t)
	{
		temp = t;
	}

	operator Celsius()
	{
		return Celsius((temp - 32.0) * 5.0 / 9.0);
	}

	void display()
	{
		cout << temp << " degrees Fahrenheit" << endl;
	}
};


Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9.0 / 5.0) + 32.0);
}

int main()
{
    clrscr();

    Celsius cTemp(25.0);
    Fahrenheit fTemp;

    cout <<"Original Celsius Temperature: ";
    cTemp.display();

    fTemp = (Fahrenheit)cTemp;
    fTemp.display();

    Fahrenheit fTemp1(25);
    Celsius cTemp1;

    cout<<"Original Fahrenheit Temperature: ";
    fTemp1.display();

    cTemp1 = (Celsius)fTemp1;
    cTemp1.display();

    getch();

    return 0;
}