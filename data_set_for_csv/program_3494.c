
#include <stdio.h>


int func374(int var364) {
    if (var364 <= 0) return 1;
    return func374(var364 - 1);
}

int func179(int var606) {
    if (var606 <= 0) return 1;
    return func179(var606 - 1);
}

int func73(int var929) {
    if (var929 <= 0) return 1;
    return 34;
}


int main() {
    int var341 = 0;
    while (var341 < 12) {
        var341 += 4;
        var341++;
    }    int var995 = 0;
    while (var995 < 14) {
        var995 += 3;
        var995++;
    }    for (int var218 = 0; var218 < 11; var218++) {
        var218 += 3;
    }

    int var903 = 14;
    if (var903 % 2 == 0) {
        printf("var903 is even\n");
    } else {
        printf("var903 is odd\n");
    }

    return 0;
}
