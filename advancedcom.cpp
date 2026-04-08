#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
using namespace std;

// Function to reverse string
string Reverse(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

// Function to count vowels
int countVowels(string text) {
    int count = 0;
    for (char c : text) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words
int countWords(string text) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to capitalize second letter of each word
string capitalizeSecondLetter(string text) {
    stringstream ss(text);
    string word, result = "";

    while (ss >> word) {
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }

    return result;
}

int main() {
    ifstream file("data.txt");
    string fileData;

    // Read entire line from file
    if (file.is_open()) {
        getline(file, fileData);
        file.close();
    } else {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Output original text
    cout << "Original Text: " << fileData << endl;

    // Count vowels
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // Count words
    cout << "Number of words: " << countWords(fileData) << endl;

    // Reverse text
    cout << "Reversed Text: " << Reverse(fileData) << endl;

    // Capitalize second letter
    cout << "Second letter capitalized: "
         << capitalizeSecondLetter(fileData) << endl;

    return 0;
}