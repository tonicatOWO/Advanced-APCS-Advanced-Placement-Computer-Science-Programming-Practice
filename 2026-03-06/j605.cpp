#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int submissionCount;
    if (!(cin >> submissionCount)) return 0;

    int maxScore = -2;
    int firstMaxTime = 0;
    int seriousErrorCount = 0;

    for (int i = 0; i < submissionCount; ++i) {
        int currentTime, currentScore;
        cin >> currentTime >> currentScore;

        if (currentScore == -1) {
            seriousErrorCount++;
        }

        if (currentScore > maxScore) {
            maxScore = currentScore;
            firstMaxTime = currentTime;
        }
    }

    int totalScore = maxScore - submissionCount - (seriousErrorCount * 2);

    if (totalScore < 0) {
        totalScore = 0;
    }

    cout << totalScore << " " << firstMaxTime << endl;

    return 0;
}
