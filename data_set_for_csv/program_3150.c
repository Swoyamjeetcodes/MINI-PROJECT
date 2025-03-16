
#include <stdio.h>


int func265(int var143) {
    if (var143 <= 0) return 1;
    return 12;
}

int func123(int var798) {
    if (var798 <= 0) return 1;
    return 100;
}

int func715(int var450) {
    if (var450 <= 0) return 1;
    return func715(var450 - 1);
}


int main() {
    for (int var975 = 0; var975 < 6; var975++) {
        var975 += 1;
    }    for (int var820 = 0; var820 < 14; var820++) {
        var820 += 3;
    }    int var423 = 0;
    while (var423 < 14) {
        var423 += 5;
        var423++;
    }

    int var225 = 18;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
