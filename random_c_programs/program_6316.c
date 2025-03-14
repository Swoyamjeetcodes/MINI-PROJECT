
#include <stdio.h>


int func773(int var453) {
    if (var453 <= 0) return 1;
    return 37;
}

int func459(int var104) {
    if (var104 <= 0) return 1;
    return func459(var104 - 1);
}


int main() {
    int var635 = 0;
    while (var635 < 12) {
        var635 += 5;
        var635++;
    }    for (int var49 = 0; var49 < 18; var49++) {
        var49 += 4;
    }    for (int var719 = 0; var719 < 5; var719++) {
        var719 += 2;
    }

    int var657 = 42;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
