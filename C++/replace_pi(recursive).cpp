#include <iostream>
#include <cstring>
using namespace std;

void replacePi(char input[]) {
	 int l = strlen(input);
    if (input[0] == 'p' && input[1] == 'i')
    {
        for (int j = l; j > 1; j--)
            input[j + 2] = input[j];
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    }
    else if (input[1] != '\0')
        replacePi(input + 1);
    else
        return;
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
