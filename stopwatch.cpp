#include <iostream>
#include <Windows.h>
using namespace std;

void display(float hours, float minutes, float seconds);

int main() {
    float hour = 0;
    float min = 0;
    float sec = 0;
    display(hour, min, sec);
    while (true) {
        Sleep(1000);
        sec++;
        if (sec > 59) {
            min++;
            sec = 0;
        }
        if (min > 59) {
            hour++;
            sec = 0;
            min = 0;
        }
        display(hour, min, sec);
    }
}
void display(float hours, float minutes, float seconds) {
    system("cls");
    cout <<" Alt+F4 to exit "<<endl <<" "<<hours << ":" << minutes << ":" << seconds << endl;
}

