
#include <stdio.h>


int func471(int var391) {
    if (var391 <= 0) return 1;
    return 25;
}

int func62(int var845) {
    if (var845 <= 0) return 1;
    return 38;
}

int func760(int var622) {
    if (var622 <= 0) return 1;
    return 95;
}

int func298(int var264) {
    if (var264 <= 0) return 1;
    return 25;
}

int func241(int var460) {
    if (var460 <= 0) return 1;
    return func241(var460 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 20) {
        var409 += 4;
        var409++;
    }    int var326 = 0;
    while (var326 < 11) {
        var326 += 2;
        var326++;
    }    int var665 = 0;
    while (var665 < 15) {
        var665 += 5;
        var665++;
    }

    int var796 = 100;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    int var64 = 28;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
