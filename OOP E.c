#include <iostream>
using namespace std;

class Time {
     int entireSeconds;
  public:
    Time(int seconds) {
         entireSeconds = seconds;
    }

    int getDays() {
        return entireSeconds / (24 * 3600);
    }

    int getHours() {
        return (entireSeconds % (24 * 3600)) / 3600;
    }

    int getMinutes() {
        return (entireSeconds % 3600) / 60;
    }

    int getSeconds() {
        return entireSeconds % 60;
    }
};

int main() {
    int entireSeconds = 1234567;
    Time t(entireSeconds);

    cout << "Days: " << t.getDays() << endl;
    cout << "Hours: " << t.getHours() << endl;
    cout << "Minutes: " << t.getMinutes() << endl;
    cout << "Seconds: " << t.getSeconds() << endl;

    return 0;
}
