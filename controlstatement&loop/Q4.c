// 4.	According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program 
// to find out what is the day on 1st January of this year. 

#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main() {
    int year, totalDays = 0, i, dayIndex;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

   
    printf("Enter a year: ");
    scanf("%d", &year);

    for (i = 1900; i < year; i++) {
        if (isLeapYear(i))
            totalDays += 366;
        else
            totalDays += 365;
    }

    dayIndex = (totalDays % 7 + 1) % 7;

    printf("01/01/%d is a %s\n", year, days[dayIndex]);

    return 0;
}
