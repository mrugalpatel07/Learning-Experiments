#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    string getMonthName(int m) {
        switch (m) {
            case 1: return "January";
            case 2: return "February";
            case 3: return "March";
            case 4: return "April";
            case 5: return "May";
            case 6: return "June";
            case 7: return "July";
            case 8: return "August";
            case 9: return "September";
            case 10: return "October";
            case 11: return "November";
            case 12: return "December";
            default: return "Invalid Month";
        }
    }

    void displayDate() {
        bool isValid = true;

        if (year < 0) {
            isValid = false;
        }

        if (month < 1 || month > 12) {
            isValid = false;
        } else {
            switch (month) {
                case 4: case 6: case 9: case 11:
                    if (day < 1 || day > 30) isValid = false;
                    break;
                case 2:
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                        if (day < 1 || day > 29) isValid = false;
                    } else {
                        if (day < 1 || day > 28) isValid = false;
                    }
                    break;
                default:
                    if (day < 1 || day > 31) isValid = false;
                    break;
            }
        }

        if (isValid) {
            cout << "Valid Date: " << day << " " << getMonthName(month) << " " << year << endl;
        } else {
            cout << "Invalid Date: " << day << "/" << month << "/" << year << endl;
        }
    }
};

int main() {
    Date date;
    date.setDate(15, 3, 2025);
    date.displayDate();
    return 0;
}