#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    float a, b, c;
    cout << "<<LOOKING FOR THE SIDE LENGTH ON THE ELBOW TRIANGLE>>\n";
    cout << "1. Find the Length of the Slant Side\n";
    cout << "2. Find the Length of the Vertical Side\n";
    cout << "3. Find the Length of the Base Side\n";
    cout << "Choice: ";
        cin >> x;
    cout << " " << endl;
    switch (x)
{
    case 1:
            cout << "Find the Length of the Slant Side" << endl;
            cout << " " << endl;
            cout << "Enter the side values for the base: ";
                cin >> b;

            cout << "Enter the vertical side value: ";
                cin >> c;

            a = sqrt((b*b) + (c*c));

            cout << "Result: " << a;
    break;

    case 2:
            cout << "Find the Length of the Vertical Side" << endl;
            cout << " " << endl;
            cout << "Enter the slanted side value: ";
                cin >> a;

            cout << "Enter the side values for the base: ";
                cin >> b;

            c = sqrt((a*a) - (b*b));

            cout << "Result: " << c;
    break;

    case 3:
            cout << "Find the Length of the Base Side" << endl;
            cout << " " << endl;
            cout << "Enter the slanted side value: ";
                cin >> a;

            cout << "Enter the vertical side value: ";
                cin >> c;

            b = sqrt((pow(a, 2)) - (pow(c, 2)));

            cout << "Result: " << b;
    break;
}

return 0;
}