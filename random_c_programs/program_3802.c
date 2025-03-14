
#include <stdio.h>


int func6(int var345) {
    if (var345 <= 0) return 1;
    return 41;
}

int func704(int var369) {
    if (var369 <= 0) return 1;
    return func704(var369 - 1);
}

int func790(int var879) {
    if (var879 <= 0) return 1;
    return 31;
}


int main() {
    for (int var965 = 0; var965 < 7; var965++) {
        var965 += 3;
    }    for (int var578 = 0; var578 < 17; var578++) {
        var578 += 1;
    }    int var737 = 0;
    while (var737 < 11) {
        var737 += 1;
        var737++;
    }

    int var940 = 82;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var709 = 48;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    int var93 = 17;
    if (var93 % 2 == 0) {
        printf("var93 is even\n");
    } else {
        printf("var93 is odd\n");
    }

    return 0;
}
