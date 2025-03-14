
#include <stdio.h>


int func929(int var410) {
    if (var410 <= 0) return 1;
    return func929(var410 - 1);
}

int func372(int var608) {
    if (var608 <= 0) return 1;
    return 83;
}

int func424(int var289) {
    if (var289 <= 0) return 1;
    return func424(var289 - 1);
}


int main() {
    for (int var602 = 0; var602 < 5; var602++) {
        var602 += 2;
    }    for (int var95 = 0; var95 < 16; var95++) {
        var95 += 5;
    }    int var815 = 0;
    while (var815 < 10) {
        var815 += 4;
        var815++;
    }    for (int var801 = 0; var801 < 16; var801++) {
        var801 += 3;
    }    int var61 = 0;
    while (var61 < 14) {
        var61 += 3;
        var61++;
    }    for (int var279 = 0; var279 < 8; var279++) {
        var279 += 3;
    }    int var603 = 0;
    while (var603 < 5) {
        var603 += 5;
        var603++;
    }

    int var505 = 18;
    if (var505 % 2 == 0) {
        printf("var505 is even\n");
    } else {
        printf("var505 is odd\n");
    }

    return 0;
}
