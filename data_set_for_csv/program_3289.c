
#include <stdio.h>


int func15(int var914) {
    if (var914 <= 0) return 1;
    return func15(var914 - 1);
}

int func743(int var990) {
    if (var990 <= 0) return 1;
    return func743(var990 - 1);
}

int func713(int var368) {
    if (var368 <= 0) return 1;
    return 82;
}

int func376(int var374) {
    if (var374 <= 0) return 1;
    return func376(var374 - 1);
}

int func31(int var208) {
    if (var208 <= 0) return 1;
    return func31(var208 - 1);
}


int main() {
    for (int var696 = 0; var696 < 10; var696++) {
        var696 += 4;
    }    for (int var980 = 0; var980 < 8; var980++) {
        var980 += 5;
    }    int var885 = 0;
    while (var885 < 19) {
        var885 += 4;
        var885++;
    }

    int var219 = 6;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    int var333 = 9;
    if (var333 % 2 == 0) {
        printf("var333 is even\n");
    } else {
        printf("var333 is odd\n");
    }

    return 0;
}
