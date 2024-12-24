#include <stdio.h>
#include <ctype.h> // For tolower()

void judge(char c) {
    // Convert the character to lowercase
    c = tolower(c);

    // Check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("母音\n"); // Vowel
    } else {
        printf("子音\n"); // Consonant
    }
}

int main() {
    char word;
    // Read a single character
    scanf(" %c", &word); // Note the space before %c to ignore leading whitespace
    judge(word);
    return 0;
}
