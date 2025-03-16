
#include <stdio.h>


int func244(int var970) {
    if (var970 <= 0) return 1;
    return func244(var970 - 1);
}


int main() {
    int var815 = 0;
    while (var815 < 14) {
        var815 += 1;
        var815++;
    }    for (int var463 = 0; var463 < 6; var463++) {
        var463 += 2;
    }    for (int var847 = 0; var847 < 14; var847++) {
        var847 += 3;
    }    for (int var377 = 0; var377 < 16; var377++) {
        var377 += 2;
    }    for (int var685 = 0; var685 < 8; var685++) {
        var685 += 3;
    }    int var907 = 0;
    while (var907 < 8) {
        var907 += 4;
        var907++;
    }

    int var320 = 22;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    return 0;
}
