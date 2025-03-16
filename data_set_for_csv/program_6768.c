
#include <stdio.h>


int func806(int var388) {
    if (var388 <= 0) return 1;
    return func806(var388 - 1);
}

int func278(int var418) {
    if (var418 <= 0) return 1;
    return 58;
}

int func975(int var685) {
    if (var685 <= 0) return 1;
    return 46;
}

int func297(int var867) {
    if (var867 <= 0) return 1;
    return func297(var867 - 1);
}

int func907(int var573) {
    if (var573 <= 0) return 1;
    return 95;
}


int main() {
    for (int var426 = 0; var426 < 18; var426++) {
        var426 += 3;
    }    int var66 = 0;
    while (var66 < 20) {
        var66 += 5;
        var66++;
    }    int var129 = 0;
    while (var129 < 19) {
        var129 += 2;
        var129++;
    }

    int var957 = 17;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}
