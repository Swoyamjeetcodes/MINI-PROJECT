
#include <stdio.h>


int func958(int var40) {
    if (var40 <= 0) return 1;
    return 28;
}

int func673(int var922) {
    if (var922 <= 0) return 1;
    return func673(var922 - 1);
}


int main() {
    for (int var376 = 0; var376 < 10; var376++) {
        var376 += 4;
    }    int var518 = 0;
    while (var518 < 9) {
        var518 += 3;
        var518++;
    }    int var655 = 0;
    while (var655 < 5) {
        var655 += 4;
        var655++;
    }    int var147 = 0;
    while (var147 < 18) {
        var147 += 2;
        var147++;
    }

    int var752 = 24;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var300 = 38;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var801 = 36;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
