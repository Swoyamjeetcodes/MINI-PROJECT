
#include <stdio.h>


int func629(int var861) {
    if (var861 <= 0) return 1;
    return func629(var861 - 1);
}

int func205(int var548) {
    if (var548 <= 0) return 1;
    return 32;
}

int func563(int var872) {
    if (var872 <= 0) return 1;
    return 84;
}

int func403(int var540) {
    if (var540 <= 0) return 1;
    return 23;
}

int func216(int var319) {
    if (var319 <= 0) return 1;
    return func216(var319 - 1);
}


int main() {
    for (int var154 = 0; var154 < 8; var154++) {
        var154 += 3;
    }    for (int var579 = 0; var579 < 14; var579++) {
        var579 += 3;
    }    for (int var18 = 0; var18 < 6; var18++) {
        var18 += 5;
    }

    int var798 = 39;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
