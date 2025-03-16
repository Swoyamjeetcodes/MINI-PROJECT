
#include <stdio.h>


int func818(int var302) {
    if (var302 <= 0) return 1;
    return 16;
}

int func56(int var682) {
    if (var682 <= 0) return 1;
    return func56(var682 - 1);
}

int func839(int var447) {
    if (var447 <= 0) return 1;
    return func839(var447 - 1);
}

int func39(int var676) {
    if (var676 <= 0) return 1;
    return 60;
}

int func900(int var284) {
    if (var284 <= 0) return 1;
    return 70;
}


int main() {
    int var544 = 0;
    while (var544 < 14) {
        var544 += 5;
        var544++;
    }    int var128 = 0;
    while (var128 < 7) {
        var128 += 3;
        var128++;
    }    int var264 = 0;
    while (var264 < 9) {
        var264 += 1;
        var264++;
    }    for (int var39 = 0; var39 < 18; var39++) {
        var39 += 5;
    }

    int var761 = 65;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    int var624 = 27;
    if (var624 % 2 == 0) {
        printf("var624 is even\n");
    } else {
        printf("var624 is odd\n");
    }

    int var403 = 22;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    return 0;
}
