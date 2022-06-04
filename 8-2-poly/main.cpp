#include <iostream>

using namespace std;

class Clock {
public:
    Clock(int hour = 0, int minute = 0, int second = 0);

    void showTime() const;

    Clock &operator++();//prefix
    Clock operator++(int); //suffix
private:
    int hour;
    int minute;
    int second;
};

Clock::Clock(int hour, int minute, int second) {
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    } else {
        cout << "Time Error!" << endl;
    }
}

void Clock::showTime() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

Clock &Clock::operator++() {
    second++;
    if (second >= 60) {
        second = 0;
        minute++;
        if (minute >= 60) {
            minute = 0;
            hour = (hour + 1) % 24;
        }
    }
    return *this; //??
}

Clock Clock::operator++(int) {
    Clock old = *this;
    ++(*this);
    return old;
}

int main() {
    Clock myClock(23, 59, 59);
    cout << "initial time: " << endl;
    myClock.showTime();

    (myClock++).showTime();
    cout<<"show myClock++ time: ";
    myClock.showTime();

    cout << "show ++myClock time: ";
    (++myClock).showTime();
    return 0;
}
