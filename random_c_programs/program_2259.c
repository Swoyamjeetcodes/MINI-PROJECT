
#include <stdio.h>


int func1(int var267) {
    if (var267 <= 0) return 1;
    return 97;
}

int func907(int var259) {
    if (var259 <= 0) return 1;
    return 96;
}

int func924(int var423) {
    if (var423 <= 0) return 1;
    return 9;
}

int func758(int var385) {
    if (var385 <= 0) return 1;
    return func758(var385 - 1);
}


int main() {
    int var955 = 0;
    while (var955 < 20) {
        var955 += 3;
        var955++;
    }    for (int var670 = 0; var670 < 16; var670++) {
        var670 += 1;
    }    int var171 = 0;
    while (var171 < 18) {
        var171 += 5;
        var171++;
    }

    int var700 = 68;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
