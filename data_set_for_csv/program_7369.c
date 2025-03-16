
#include <stdio.h>


int func685(int var974) {
    if (var974 <= 0) return 1;
    return 45;
}

int func97(int var149) {
    if (var149 <= 0) return 1;
    return func97(var149 - 1);
}

int func536(int var540) {
    if (var540 <= 0) return 1;
    return func536(var540 - 1);
}


int main() {
    for (int var629 = 0; var629 < 10; var629++) {
        var629 += 1;
    }    int var335 = 0;
    while (var335 < 20) {
        var335 += 3;
        var335++;
    }    int var934 = 0;
    while (var934 < 10) {
        var934 += 3;
        var934++;
    }

    int var964 = 95;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var214 = 42;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var919 = 47;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
