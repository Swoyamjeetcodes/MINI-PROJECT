
#include <stdio.h>


int func503(int var588) {
    if (var588 <= 0) return 1;
    return 97;
}

int func852(int var293) {
    if (var293 <= 0) return 1;
    return 57;
}

int func912(int var867) {
    if (var867 <= 0) return 1;
    return func912(var867 - 1);
}


int main() {
    for (int var939 = 0; var939 < 18; var939++) {
        var939 += 2;
    }    int var628 = 0;
    while (var628 < 10) {
        var628 += 1;
        var628++;
    }    int var166 = 0;
    while (var166 < 7) {
        var166 += 2;
        var166++;
    }

    int var831 = 5;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    int var826 = 45;
    if (var826 % 2 == 0) {
        printf("var826 is even\n");
    } else {
        printf("var826 is odd\n");
    }

    int var763 = 66;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    return 0;
}
