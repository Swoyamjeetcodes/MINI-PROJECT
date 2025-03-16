
#include <stdio.h>


int func782(int var405) {
    if (var405 <= 0) return 1;
    return 39;
}

int func817(int var334) {
    if (var334 <= 0) return 1;
    return 52;
}

int func986(int var305) {
    if (var305 <= 0) return 1;
    return func986(var305 - 1);
}

int func7(int var647) {
    if (var647 <= 0) return 1;
    return func7(var647 - 1);
}

int func926(int var718) {
    if (var718 <= 0) return 1;
    return 93;
}

int func457(int var358) {
    if (var358 <= 0) return 1;
    return func457(var358 - 1);
}

int func267(int var635) {
    if (var635 <= 0) return 1;
    return func267(var635 - 1);
}

int func863(int var454) {
    if (var454 <= 0) return 1;
    return 60;
}


int main() {
    for (int var380 = 0; var380 < 12; var380++) {
        var380 += 5;
    }    int var101 = 0;
    while (var101 < 9) {
        var101 += 3;
        var101++;
    }

    int var174 = 77;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    int var384 = 49;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var678 = 93;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    int var875 = 24;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
