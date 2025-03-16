
#include <stdio.h>


int func606(int var744) {
    if (var744 <= 0) return 1;
    return func606(var744 - 1);
}

int func951(int var634) {
    if (var634 <= 0) return 1;
    return func951(var634 - 1);
}

int func433(int var799) {
    if (var799 <= 0) return 1;
    return func433(var799 - 1);
}

int func11(int var300) {
    if (var300 <= 0) return 1;
    return func11(var300 - 1);
}


int main() {
    for (int var139 = 0; var139 < 15; var139++) {
        var139 += 4;
    }

    int var343 = 98;
    if (var343 % 2 == 0) {
        printf("var343 is even\n");
    } else {
        printf("var343 is odd\n");
    }

    int var14 = 71;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var242 = 3;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
