
#include <stdio.h>


int func517(int var974) {
    if (var974 <= 0) return 1;
    return func517(var974 - 1);
}


int main() {
    int var91 = 0;
    while (var91 < 14) {
        var91 += 3;
        var91++;
    }    for (int var477 = 0; var477 < 11; var477++) {
        var477 += 4;
    }

    int var653 = 7;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    int var508 = 77;
    if (var508 % 2 == 0) {
        printf("var508 is even\n");
    } else {
        printf("var508 is odd\n");
    }

    int var330 = 83;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
