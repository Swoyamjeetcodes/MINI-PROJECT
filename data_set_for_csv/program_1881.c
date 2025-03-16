
#include <stdio.h>


int func535(int var121) {
    if (var121 <= 0) return 1;
    return func535(var121 - 1);
}

int func354(int var823) {
    if (var823 <= 0) return 1;
    return func354(var823 - 1);
}

int func589(int var698) {
    if (var698 <= 0) return 1;
    return func589(var698 - 1);
}

int func776(int var8) {
    if (var8 <= 0) return 1;
    return 58;
}

int func954(int var465) {
    if (var465 <= 0) return 1;
    return 28;
}


int main() {
    for (int var442 = 0; var442 < 10; var442++) {
        var442 += 5;
    }    for (int var701 = 0; var701 < 15; var701++) {
        var701 += 3;
    }

    int var609 = 89;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    int var267 = 76;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    int var248 = 39;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
