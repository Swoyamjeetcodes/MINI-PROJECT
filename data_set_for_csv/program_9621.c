
#include <stdio.h>


int func19(int var454) {
    if (var454 <= 0) return 1;
    return func19(var454 - 1);
}

int func878(int var524) {
    if (var524 <= 0) return 1;
    return func878(var524 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 9) {
        var647 += 5;
        var647++;
    }

    int var774 = 5;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var329 = 42;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var517 = 43;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
