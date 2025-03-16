
#include <stdio.h>


int func190(int var736) {
    if (var736 <= 0) return 1;
    return func190(var736 - 1);
}


int main() {
    int var779 = 0;
    while (var779 < 17) {
        var779 += 4;
        var779++;
    }    int var628 = 0;
    while (var628 < 13) {
        var628 += 5;
        var628++;
    }    int var888 = 0;
    while (var888 < 7) {
        var888 += 4;
        var888++;
    }

    int var859 = 14;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    int var357 = 78;
    if (var357 % 2 == 0) {
        printf("var357 is even\n");
    } else {
        printf("var357 is odd\n");
    }

    int var328 = 35;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    return 0;
}
