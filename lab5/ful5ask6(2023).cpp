#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("letter.txt");
    char ch;
    int wordCounter, sentenceCounter;

    if (!fin) {
        cout<<"file error";
        return 1;
    }

    wordCounter = 0;
    sentenceCounter = 0;

    while (fin.get(ch)) {
        if (ch == ' ')
            wordCounter++;
        else if (ch == '.')
            sentenceCounter++;
    }

    if (wordCounter) wordCounter++;

    cout << "Number of words : " << wordCounter << endl;
    cout << "Number of sentences : " << sentenceCounter << endl;

    fin.close();

    return 0;
}
