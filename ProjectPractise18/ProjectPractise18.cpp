#include <string>
#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;



int main()
{
    string text = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s. An unknown printer scrambled a large collection of type sizes and shapes, using Lorem Ipsum to produce a copy of the text. Lorem Ipsum has survived five centuries unchanged, and has been popularised by electronic typesetting. It was popularised in modern times by the release of Letraset sheets containing Lorem Ipsum samples in the 1960s, and more recently by desktop publishing software like Aldus PageMaker which use Lorem Ipsum in their templates.";


    ofstream outFile("Text.txt", ios::app);
    outFile << text << endl;
    ifstream inFile("Text.txt");
    while (getline(inFile, text)) {
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == 'A') {
                text[i] = 'X';
            }
        }

        cout << text << endl;
    }


}


