
#include <stdio.h>


int func486(int var671) {
    if (var671 <= 0) return 1;
    return func486(var671 - 1);
}

int func947(int var507) {
    if (var507 <= 0) return 1;
    return func947(var507 - 1);
}

int func263(int var76) {
    if (var76 <= 0) return 1;
    return func263(var76 - 1);
}


int main() {
    for (int var687 = 0; var687 < 8; var687++) {
        var687 += 5;
    }    for (int var909 = 0; var909 < 9; var909++) {
        var909 += 4;
    }    int var582 = 0;
    while (var582 < 5) {
        var582 += 1;
        var582++;
    }    int var273 = 0;
    while (var273 < 15) {
        var273 += 2;
        var273++;
    }    int var762 = 0;
    while (var762 < 13) {
        var762 += 2;
        var762++;
    }    for (int var483 = 0; var483 < 12; var483++) {
        var483 += 5;
    }    int var958 = 0;
    while (var958 < 18) {
        var958 += 4;
        var958++;
    }

    int var95 = 35;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    int var503 = 29;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    return 0;
}
