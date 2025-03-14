
#include <stdio.h>


int func261(int var799) {
    if (var799 <= 0) return 1;
    return func261(var799 - 1);
}

int func298(int var753) {
    if (var753 <= 0) return 1;
    return func298(var753 - 1);
}


int main() {
    for (int var623 = 0; var623 < 12; var623++) {
        var623 += 1;
    }    int var344 = 0;
    while (var344 < 16) {
        var344 += 2;
        var344++;
    }    int var367 = 0;
    while (var367 < 11) {
        var367 += 1;
        var367++;
    }

    int var887 = 72;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    int var715 = 29;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var513 = 20;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
