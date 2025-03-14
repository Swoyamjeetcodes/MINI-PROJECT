
#include <stdio.h>


int func697(int var265) {
    if (var265 <= 0) return 1;
    return 34;
}

int func685(int var917) {
    if (var917 <= 0) return 1;
    return func685(var917 - 1);
}

int func393(int var701) {
    if (var701 <= 0) return 1;
    return func393(var701 - 1);
}


int main() {
    int var212 = 0;
    while (var212 < 16) {
        var212 += 4;
        var212++;
    }    int var879 = 0;
    while (var879 < 17) {
        var879 += 1;
        var879++;
    }    for (int var784 = 0; var784 < 15; var784++) {
        var784 += 5;
    }

    int var613 = 13;
    if (var613 % 2 == 0) {
        printf("var613 is even\n");
    } else {
        printf("var613 is odd\n");
    }

    int var953 = 25;
    if (var953 % 2 == 0) {
        printf("var953 is even\n");
    } else {
        printf("var953 is odd\n");
    }

    int var447 = 48;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    return 0;
}
