#include <iostream>
#include <vector>
using namespace std;



int main() {
    // read in the data
    int num_participants, place_cutoff;
    cin >> num_participants >> place_cutoff;

    vector<int> scores;
    int score;

    for (int i = 0; i < num_participants; i++) {
        cin >> score;
        scores.push_back(score);
    }

    // we need to go the cutoff place and find the score
    // after that, we need to go through the vector and find all the participants that satisfy the constraints, we know the input is in descending order
    int num_elgible = 0;
    int place_cutoff_score = scores[place_cutoff - 1];
    for (int i = 0; i < num_participants; i++) {
        if (scores[i] > 0 && scores[i] >= place_cutoff_score) {
            num_elgible++;
        } else {
            break;
        }
    }

    cout << num_elgible << endl;
    return 0;
}