#include <iostream>
using namespace std;

class TimeConverter {
public:

    void secondsToTime(int totalSeconds) {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }

    void timeToSeconds(int hours, int minutes, int seconds) {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds;
        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter tc;
    int choice;

    cout << "1. Seconds to HH:MM:SS\n";
    cout << "2. HH:MM:SS to Seconds\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        tc.secondsToTime(totalSeconds);
    }
    else if (choice == 2) {
        int h, m, s;
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
        tc.timeToSeconds(h, m, s);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
