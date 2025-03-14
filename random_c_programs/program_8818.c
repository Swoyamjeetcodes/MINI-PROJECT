
#include <stdio.h>


int func522(int var961) {
    if (var961 <= 0) return 1;
    return func522(var961 - 1);
}

int func798(int var521) {
    if (var521 <= 0) return 1;
    return func798(var521 - 1);
}

int func748(int var752) {
    if (var752 <= 0) return 1;
    return func748(var752 - 1);
}


int main() {
    int var453 = 0;
    while (var453 < 12) {
        var453 += 1;
        var453++;
    }

    int var554 = 70;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    int var371 = 48;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    int var282 = 9;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}
