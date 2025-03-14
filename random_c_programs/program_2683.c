
#include <stdio.h>


int func163(int var418) {
    if (var418 <= 0) return 1;
    return func163(var418 - 1);
}

int func765(int var242) {
    if (var242 <= 0) return 1;
    return func765(var242 - 1);
}


int main() {
    int var649 = 0;
    while (var649 < 14) {
        var649 += 5;
        var649++;
    }    for (int var987 = 0; var987 < 11; var987++) {
        var987 += 2;
    }    for (int var520 = 0; var520 < 5; var520++) {
        var520 += 4;
    }

    int var374 = 72;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var442 = 3;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
