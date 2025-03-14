
#include <stdio.h>


int func734(int var346) {
    if (var346 <= 0) return 1;
    return func734(var346 - 1);
}

int func389(int var915) {
    if (var915 <= 0) return 1;
    return func389(var915 - 1);
}


int main() {
    int var289 = 0;
    while (var289 < 20) {
        var289 += 2;
        var289++;
    }    for (int var518 = 0; var518 < 6; var518++) {
        var518 += 2;
    }    int var949 = 0;
    while (var949 < 7) {
        var949 += 2;
        var949++;
    }

    int var984 = 44;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    int var580 = 21;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    return 0;
}
