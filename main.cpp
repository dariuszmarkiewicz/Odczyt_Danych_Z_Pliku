#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;

    ifstream moj_plik("dane.txt");

    moj_plik >> text;

    cout << text << endl;

    moj_plik.close();

    return 0;
}
