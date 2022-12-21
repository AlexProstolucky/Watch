#include <iostream>
#include <windows.h>
using namespace std;
class Oclock 
{
private:
    int second = 0;
    int minute = 0;
    int hour = 0;
public:
    void start() 
    {
        while (1) {
            print();
            if (second < 59) second++;
            else { 
                second = 0;
                if (minute < 59) minute++;
                else 
                {
                    minute = 0;
                    hour++;
                }
            }
            Sleep(950);
        }
    }
    void print() 
    {
        system("cls");
        cout << hour << ":" << minute << ":" << second;
    }
};

int main()
{
    Oclock oclock;
    oclock.start();
}