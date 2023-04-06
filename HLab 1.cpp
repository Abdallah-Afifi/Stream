#include <iostream>
#include <fstream>
#include <string>

using namespace std;

using namespace std;

int main()
{
    ofstream File("streams.txt");
    string text;
    
    for (int i = 1; i <= 10; i++) {
        File << i << "\n";
    }
    File.close();

    ifstream MyReadFile("streams.txt");

    while (getline (MyReadFile, text)) {

        cout << text << "\n";
    }
    cout << endl;


    MyReadFile.close();

    return 0;
}

