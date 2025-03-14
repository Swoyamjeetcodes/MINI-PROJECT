
#include <stdio.h>


int func900(int var842) {
    if (var842 <= 0) return 1;
    return func900(var842 - 1);
}

int func512(int var782) {
    if (var782 <= 0) return 1;
    return 3;
}


int main() {
    int var690 = 0;
    while (var690 < 13) {
        var690 += 3;
        var690++;
    }    for (int var769 = 0; var769 < 11; var769++) {
        var769 += 5;
    }    for (int var845 = 0; var845 < 10; var845++) {
        var845 += 1;
    }    for (int var157 = 0; var157 < 20; var157++) {
        var157 += 2;
    }    int var898 = 0;
    while (var898 < 6) {
        var898 += 5;
        var898++;
    }    for (int var34 = 0; var34 < 11; var34++) {
        var34 += 5;
    }

    int var963 = 41;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var26 = 91;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    int var621 = 24;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
