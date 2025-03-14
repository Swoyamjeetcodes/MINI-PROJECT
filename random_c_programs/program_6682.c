
#include <stdio.h>


int func453(int var577) {
    if (var577 <= 0) return 1;
    return func453(var577 - 1);
}

int func535(int var124) {
    if (var124 <= 0) return 1;
    return func535(var124 - 1);
}

int func514(int var528) {
    if (var528 <= 0) return 1;
    return func514(var528 - 1);
}


int main() {
    int var281 = 0;
    while (var281 < 17) {
        var281 += 5;
        var281++;
    }    for (int var412 = 0; var412 < 18; var412++) {
        var412 += 5;
    }    int var554 = 0;
    while (var554 < 7) {
        var554 += 1;
        var554++;
    }

    int var667 = 34;
    if (var667 % 2 == 0) {
        printf("var667 is even\n");
    } else {
        printf("var667 is odd\n");
    }

    int var300 = 39;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    return 0;
}
