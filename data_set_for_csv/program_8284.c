
#include <stdio.h>


int func960(int var911) {
    if (var911 <= 0) return 1;
    return 91;
}

int func580(int var656) {
    if (var656 <= 0) return 1;
    return 38;
}

int func899(int var48) {
    if (var48 <= 0) return 1;
    return func899(var48 - 1);
}

int func120(int var697) {
    if (var697 <= 0) return 1;
    return func120(var697 - 1);
}


int main() {
    for (int var614 = 0; var614 < 9; var614++) {
        var614 += 2;
    }

    int var390 = 97;
    if (var390 % 2 == 0) {
        printf("var390 is even\n");
    } else {
        printf("var390 is odd\n");
    }

    int var942 = 100;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    return 0;
}
