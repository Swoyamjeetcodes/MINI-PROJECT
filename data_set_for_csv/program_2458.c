
#include <stdio.h>


int func894(int var179) {
    if (var179 <= 0) return 1;
    return func894(var179 - 1);
}

int func674(int var230) {
    if (var230 <= 0) return 1;
    return func674(var230 - 1);
}

int func117(int var233) {
    if (var233 <= 0) return 1;
    return func117(var233 - 1);
}


int main() {
    int var906 = 0;
    while (var906 < 13) {
        var906 += 5;
        var906++;
    }

    int var965 = 46;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    int var610 = 20;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    int var309 = 90;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    return 0;
}
