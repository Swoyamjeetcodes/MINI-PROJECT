
#include <stdio.h>


int func860(int var959) {
    if (var959 <= 0) return 1;
    return func860(var959 - 1);
}

int func357(int var78) {
    if (var78 <= 0) return 1;
    return func357(var78 - 1);
}


int main() {
    for (int var507 = 0; var507 < 17; var507++) {
        var507 += 1;
    }    for (int var861 = 0; var861 < 13; var861++) {
        var861 += 2;
    }    int var438 = 0;
    while (var438 < 17) {
        var438 += 2;
        var438++;
    }

    int var220 = 94;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    int var600 = 88;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    int var162 = 47;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}
