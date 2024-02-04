#include <iostream>

using namespace std;

void shorten() {
    // first we need to get the word
    string word;
    cin >> word;

    // then we need to check its length
    int word_length = word.length();
    if (word_length <= 10) {
        cout << word << endl;
        return;
    } 
        // if greater than 10 chars, then shorten
    cout << word[0] + to_string(word_length - 2) + word[word_length - 1] << endl;
    return;
}

int main() {

    int num_words;
    cin >> num_words;

    while(num_words--) {
        shorten();
    }

    return 0;
}