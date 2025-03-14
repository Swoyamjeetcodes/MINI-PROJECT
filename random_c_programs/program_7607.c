
#include <stdio.h>


int func195(int var143) {
    if (var143 <= 0) return 1;
    return func195(var143 - 1);
}

int func598(int var453) {
    if (var453 <= 0) return 1;
    return 33;
}

int func633(int var523) {
    if (var523 <= 0) return 1;
    return func633(var523 - 1);
}

int func764(int var708) {
    if (var708 <= 0) return 1;
    return func764(var708 - 1);
}

int func339(int var853) {
    if (var853 <= 0) return 1;
    return func339(var853 - 1);
}

int func525(int var87) {
    if (var87 <= 0) return 1;
    return func525(var87 - 1);
}


int main() {
    for (int var97 = 0; var97 < 8; var97++) {
        var97 += 4;
    }    for (int var524 = 0; var524 < 17; var524++) {
        var524 += 2;
    }    int var645 = 0;
    while (var645 < 10) {
        var645 += 4;
        var645++;
    }

    int var304 = 83;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    int var261 = 57;
    if (var261 % 2 == 0) {
        printf("var261 is even\n");
    } else {
        printf("var261 is odd\n");
    }

    int var115 = 86;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
