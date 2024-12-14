#include <iostream>
#include <iomanip>
#include <cstring>

const int MAX_CHAR = 128; // ASCII range for printable characters

class CharCount {
private:
    char character;
    int count;

public:
    // Constructor
    CharCount() : character(0), count(0) {}

    // Accessor methods
    char getCharacter() const { return character; }
    int getCount() const { return count; }

    // Modifier methods
    void setCharacter(char c) { character = c; }
    void setCount(int c) { count = c; }

    // Increment count
    void incrementCount() { count++; }

    // Print function
    void print() const {
        if (count > 0) {
            std::cout << character << ": " << count << "\n";
        }
    }
};

// Function to parse the C-string and count character occurrences
void parseString(const char* str, CharCount charCounts[]) {
    for (int i = 0; i < MAX_CHAR; i++) {
        charCounts[i].setCharacter(i);
        charCounts[i].setCount(0);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char index = static_cast<unsigned char>(str[i]);
        charCounts[index].incrementCount();
    }
}

// Function to display the histogram without using algorithm library
void displayHistogram(CharCount charCounts[]) {
    // Manual sorting
    for (int i = 0; i < MAX_CHAR - 1; i++) {
        for (int j = i + 1; j < MAX_CHAR; j++) {
            if (charCounts[i].getCharacter() > charCounts[j].getCharacter()) {
                CharCount temp = charCounts[i];
                charCounts[i] = charCounts[j];
                charCounts[j] = temp;
            }
        }
    }

    std::cout << "\nCharacter Histogram:\n";
    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCounts[i].getCount() > 0) {
            std::cout << charCounts[i].getCharacter() << " : " << charCounts[i].getCount() << "\n";
        }
    }
}

// Main function
int main() {
    const int MAX_SIZE = 1000;
    char input[MAX_SIZE];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_SIZE);

    CharCount charCounts[MAX_CHAR];
    parseString(input, charCounts);

    // Count spaces, letters, and digits
    int spaceCount = 0, letterCount = 0, digitCount = 0;
    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCounts[i].getCount() > 0) {
            if (charCounts[i].getCharacter() == ' ') {
                spaceCount += charCounts[i].getCount();
            } else if (std::isalpha(charCounts[i].getCharacter())) {
                letterCount += charCounts[i].getCount();
            } else if (std::isdigit(charCounts[i].getCharacter())) {
                digitCount += charCounts[i].getCount();
            }
        }
    }

    // Display results
    std::cout << "\nSummary:\n";
    std::cout << "Spaces: " << spaceCount << "\n";
    std::cout << "Letters: " << letterCount << "\n";
    std::cout << "Digits: " << digitCount << "\n";

    displayHistogram(charCounts);

    return 0;
}
