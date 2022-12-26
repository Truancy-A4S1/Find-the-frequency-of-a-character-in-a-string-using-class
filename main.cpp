/*

Find the frequency of a character in a string using class

*/

#include <iostream>
#include <string.h>

using namespace std;

class String{

private:
    string a;
    char thiss;
    int counter=0;

public:
    String()
    {
        cout << "Enter a string: ";
        cin >> a;
    }

    int get_Frequency()
    {
        cout << endl << "Choose a character: ";
        cin >> thiss;
        cout << endl << "Frequency of "<< thiss <<": ";
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]==thiss)
            {
                counter++;
            }
        }
        return counter;
    }
};

int main()
{
    String first;
    cout << first.get_Frequency() << endl;
}
