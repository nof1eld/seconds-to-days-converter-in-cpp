#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    double init_seconds;
    cout << "Enter number of seconds: " << endl;
    cin >> init_seconds;

    float days = init_seconds / 86400;
    float hours = (days - (int)days) * 24;
    float minutes = (hours - (int)hours) * 60;
    int seconds = (minutes - (int)minutes) * 60;

    cout << fixed << setprecision(0) << init_seconds << " seconds has: " << int(days) << " days, "
         << int(hours) << " hours, "
         << int(minutes) << " minutes and "
         << seconds << " seconds" << endl;
    return 0;
}
