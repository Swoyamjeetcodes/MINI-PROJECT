
#include <stdio.h>


int func566(int var698) {
    if (var698 <= 0) return 1;
    return 22;
}

int func419(int var600) {
    if (var600 <= 0) return 1;
    return 79;
}

int func869(int var364) {
    if (var364 <= 0) return 1;
    return func869(var364 - 1);
}

int func24(int var830) {
    if (var830 <= 0) return 1;
    return func24(var830 - 1);
}


int main() {
    for (int var29 = 0; var29 < 18; var29++) {
        var29 += 5;
    }    for (int var360 = 0; var360 < 11; var360++) {
        var360 += 5;
    }

    int var295 = 52;
    if (var295 % 2 == 0) {
        printf("var295 is even\n");
    } else {
        printf("var295 is odd\n");
    }

    int var242 = 56;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
