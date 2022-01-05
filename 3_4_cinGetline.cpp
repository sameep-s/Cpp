#include <iostream>
using namespace std;

int main()
{
    // char sentence[1000];

    // cin.getline(sentence, 1000);
    // cout << "sentence: " << sentence << endl;

    // for paragraphs

    char paragraph[1000];
    cin.getline(paragraph, 1000, '.');
    cout << "paragraph: " << paragraph << endl;

    return 0;
}