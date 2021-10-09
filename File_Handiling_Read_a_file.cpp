#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream my_file("test.txt");
    if (!my_file)
    {
        cout << "my_file not open";
    }
    else
    {
        while (my_file)
        {
            char ch;
            my_file.get(ch);
            if (my_file)
            {
                cout << ch;
            }
        }
    }
}
