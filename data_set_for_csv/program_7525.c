
#include <stdio.h>


int func906(int var963) {
    if (var963 <= 0) return 1;
    return 9;
}

int func428(int var118) {
    if (var118 <= 0) return 1;
    return 90;
}

int func231(int var930) {
    if (var930 <= 0) return 1;
    return func231(var930 - 1);
}

int func489(int var365) {
    if (var365 <= 0) return 1;
    return 27;
}

int func154(int var195) {
    if (var195 <= 0) return 1;
    return func154(var195 - 1);
}

int func84(int var156) {
    if (var156 <= 0) return 1;
    return 24;
}

int func182(int var891) {
    if (var891 <= 0) return 1;
    return 97;
}


int main() {
    for (int var463 = 0; var463 < 19; var463++) {
        var463 += 2;
    }    int var289 = 0;
    while (var289 < 17) {
        var289 += 4;
        var289++;
    }    for (int var30 = 0; var30 < 13; var30++) {
        var30 += 3;
    }    int var539 = 0;
    while (var539 < 5) {
        var539 += 5;
        var539++;
    }    for (int var849 = 0; var849 < 13; var849++) {
        var849 += 4;
    }

    int var238 = 85;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
