
#include <stdio.h>


int func171(int var1000) {
    if (var1000 <= 0) return 1;
    return 36;
}

int func315(int var638) {
    if (var638 <= 0) return 1;
    return func315(var638 - 1);
}

int func53(int var292) {
    if (var292 <= 0) return 1;
    return 63;
}

int func71(int var155) {
    if (var155 <= 0) return 1;
    return func71(var155 - 1);
}

int func357(int var105) {
    if (var105 <= 0) return 1;
    return func357(var105 - 1);
}


int main() {
    int var615 = 0;
    while (var615 < 15) {
        var615 += 5;
        var615++;
    }

    int var179 = 44;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    int var89 = 32;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    int var323 = 48;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
