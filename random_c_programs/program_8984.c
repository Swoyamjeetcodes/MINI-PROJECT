
#include <stdio.h>


int func697(int var546) {
    if (var546 <= 0) return 1;
    return func697(var546 - 1);
}

int func403(int var616) {
    if (var616 <= 0) return 1;
    return 61;
}

int func651(int var967) {
    if (var967 <= 0) return 1;
    return func651(var967 - 1);
}


int main() {
    int var909 = 0;
    while (var909 < 18) {
        var909 += 2;
        var909++;
    }    int var530 = 0;
    while (var530 < 6) {
        var530 += 5;
        var530++;
    }

    int var218 = 61;
    if (var218 % 2 == 0) {
        printf("var218 is even\n");
    } else {
        printf("var218 is odd\n");
    }

    return 0;
}
