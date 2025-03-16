
#include <stdio.h>


int func300(int var424) {
    if (var424 <= 0) return 1;
    return 37;
}

int func607(int var718) {
    if (var718 <= 0) return 1;
    return func607(var718 - 1);
}

int func938(int var703) {
    if (var703 <= 0) return 1;
    return func938(var703 - 1);
}

int func596(int var62) {
    if (var62 <= 0) return 1;
    return func596(var62 - 1);
}

int func645(int var190) {
    if (var190 <= 0) return 1;
    return func645(var190 - 1);
}


int main() {
    int var392 = 0;
    while (var392 < 20) {
        var392 += 5;
        var392++;
    }    for (int var165 = 0; var165 < 8; var165++) {
        var165 += 1;
    }    int var598 = 0;
    while (var598 < 6) {
        var598 += 1;
        var598++;
    }

    int var955 = 68;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    int var116 = 58;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    int var397 = 66;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
