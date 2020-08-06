#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

int cs512getinput(void)
{
    int cs512a;
    cs512a = -1;
    while (0 > cs512a)
    {
	read(cs512a);
	if (0 > cs512a)
	{
	    print("I need a non-negative number: ");
	}
    }

    return cs512a;
}

int main() 
{
    int cs512line1, cs512line2, cs512line3, cs512line4, cs512line5, cs512line6, cs512line7, cs512line8, cs512line9, 
	cs512line10, cs512line11, cs512line12, cs512dependant, cs512single, cs512a, cs512b, cs512c, cs512d, cs512e, cs512f, cs512g, 
	cs512eic, cs512spousedependant;

    print("Welcome to the United States 1040 federal income tax program.\n");
    print("(Note: this isn't the real 1040 form. If you try to submit your\n");
    print("taxes this way, you'll get what you deserve!\n\n");

    print("Answer the following questions to determine what you owe.\n\n");

    print("Total wages, salary, and tips? ");
    cs512line1 = cs512getinput();
    print("Taxable interest (such as from bank accounts)? ");
    cs512line2 = cs512getinput();
    print("Unemployment compensation, qualified state tuition, and Alaska\n");
    print("Permanent Fund dividends? ");
    cs512line3 = cs512getinput();
    cs512line4 = cs512line1+cs512line2+cs512line3;
    print("Your adjusted gross income is: ");
    write(cs512line4);

    print("Enter <1> if your parents or someone else can claim you on their");
    print(" return. \nEnter <0> otherwise: ");
    cs512dependant = cs512getinput();
    if (0 != cs512dependant)
    {
	cs512a = cs512line1 + 250;
	cs512b = 700;
	cs512c = cs512b;
	if (cs512c < cs512a)
	{
	    cs512c = cs512a;
	}
	print("Enter <1> if you are single, <0> if you are married: ");
	cs512single = cs512getinput();
	if (0 != cs512single)
	{
	    cs512d = 7350;
	}
	if (0 == cs512single)
	{
	    cs512d = 4400;
	}
	cs512e = cs512c;
	if (cs512e > cs512d)
	{
	    cs512e = cs512d;
	}
	cs512f = 0;
	if (cs512single == 0)
	{
	    print("Enter <1> if your spouse can be claimed as a dependant, ");
	    print("enter <0> if not: ");
	    cs512spousedependant = cs512getinput();
	    if (0 == cs512spousedependant)
	    {
		cs512f = 2800;
	    }
	}
	cs512g = cs512e + cs512f;

	cs512line5 = cs512g;
    }
    if (0 == cs512dependant)
    {
	print("Enter <1> if you are single, <0> if you are married: ");
	cs512single = cs512getinput();
	if (0 != cs512single)
	{
	    cs512line5 = 12950;
	}
	if (0 == cs512single)
	{
	    cs512line5 = 7200;
	}
    }

    cs512line6 = cs512line4 - cs512line5;
    if (cs512line6 < 0)
    {
	cs512line6 = 0;
    }
    print("Your taxable income is: ");
    write(cs512line6);

    print("Enter the amount of Federal income tax withheld: ");
    cs512line7 = cs512getinput();
    print("Enter <1> if you get an earned income credit (EIC); ");
    print("enter 0 otherwise: ");
    cs512eic = cs512getinput();
    cs512line8 = 0;
    if (0 != cs512eic)
    {
	print("OK, I'll give you a thousand dollars for your credit.\n");
	cs512line8 = 1000;
    }
    cs512line9 = cs512line8 + cs512line7;
    print("Your total tax payments amount to: ");
    write(cs512line9);

    cs512line10 = (cs512line6 * 28 + 50) / 100;
    print("Your total tax liability is: ");
    write(cs512line10);

    cs512line11 = cs512line9 - cs512line10;
    if (cs512line11 < 0)
    {
	cs512line11 = 0;
    }
    if (cs512line11 > 0)
    {
	print("Congratulations, you get a tax refund of $");
	write(cs512line11);
    }

    cs512line12 = cs512line10-cs512line9;
    if (cs512line12 >= 0)
    {
	print("Bummer. You owe the IRS a check for $");
	write(cs512line12);
    }
    if (cs512line12 < 0)
    {
	cs512line12 = 0;
    }

    print("Thank you for using ez-tax.\n");
}

