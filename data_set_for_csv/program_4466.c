
#include <stdio.h>


int func503(int var14) {
    if (var14 <= 0) return 1;
    return 18;
}

int func218(int var242) {
    if (var242 <= 0) return 1;
    return func218(var242 - 1);
}

int func93(int var700) {
    if (var700 <= 0) return 1;
    return 65;
}


int main() {
    for (int var387 = 0; var387 < 12; var387++) {
        var387 += 3;
    }    for (int var49 = 0; var49 < 11; var49++) {
        var49 += 3;
    }    for (int var340 = 0; var340 < 17; var340++) {
        var340 += 5;
    }

    int var867 = 35;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
