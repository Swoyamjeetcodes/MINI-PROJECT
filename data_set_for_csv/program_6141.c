
#include <stdio.h>


int func40(int var985) {
    if (var985 <= 0) return 1;
    return func40(var985 - 1);
}

int func491(int var385) {
    if (var385 <= 0) return 1;
    return func491(var385 - 1);
}

int func423(int var49) {
    if (var49 <= 0) return 1;
    return func423(var49 - 1);
}

int func924(int var705) {
    if (var705 <= 0) return 1;
    return 75;
}

int func59(int var335) {
    if (var335 <= 0) return 1;
    return func59(var335 - 1);
}


int main() {
    for (int var76 = 0; var76 < 14; var76++) {
        var76 += 4;
    }    for (int var983 = 0; var983 < 10; var983++) {
        var983 += 5;
    }

    int var716 = 32;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    int var300 = 45;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    return 0;
}
