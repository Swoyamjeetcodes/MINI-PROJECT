
#include <stdio.h>


int func273(int var11) {
    if (var11 <= 0) return 1;
    return 58;
}

int func553(int var546) {
    if (var546 <= 0) return 1;
    return 9;
}

int func842(int var461) {
    if (var461 <= 0) return 1;
    return func842(var461 - 1);
}


int main() {
    for (int var22 = 0; var22 < 12; var22++) {
        var22 += 2;
    }    for (int var6 = 0; var6 < 18; var6++) {
        var6 += 2;
    }    for (int var538 = 0; var538 < 5; var538++) {
        var538 += 3;
    }

    int var345 = 23;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var616 = 32;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    int var227 = 24;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    return 0;
}
