
#include <stdio.h>


int func264(int var77) {
    if (var77 <= 0) return 1;
    return func264(var77 - 1);
}

int func845(int var207) {
    if (var207 <= 0) return 1;
    return 9;
}

int func756(int var660) {
    if (var660 <= 0) return 1;
    return 75;
}

int func739(int var582) {
    if (var582 <= 0) return 1;
    return func739(var582 - 1);
}

int func560(int var432) {
    if (var432 <= 0) return 1;
    return func560(var432 - 1);
}


int main() {
    for (int var826 = 0; var826 < 6; var826++) {
        var826 += 1;
    }    int var744 = 0;
    while (var744 < 7) {
        var744 += 3;
        var744++;
    }    int var145 = 0;
    while (var145 < 18) {
        var145 += 4;
        var145++;
    }

    int var294 = 57;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    int var738 = 22;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
