
#include <stdio.h>


int func618(int var589) {
    if (var589 <= 0) return 1;
    return 39;
}

int func866(int var945) {
    if (var945 <= 0) return 1;
    return 41;
}

int func762(int var944) {
    if (var944 <= 0) return 1;
    return func762(var944 - 1);
}

int func648(int var714) {
    if (var714 <= 0) return 1;
    return 10;
}

int func200(int var911) {
    if (var911 <= 0) return 1;
    return func200(var911 - 1);
}

int func403(int var433) {
    if (var433 <= 0) return 1;
    return 5;
}


int main() {
    int var849 = 0;
    while (var849 < 8) {
        var849 += 2;
        var849++;
    }    for (int var351 = 0; var351 < 5; var351++) {
        var351 += 5;
    }

    int var242 = 55;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    int var677 = 47;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    return 0;
}
