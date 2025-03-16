
#include <stdio.h>


int func7(int var220) {
    if (var220 <= 0) return 1;
    return 88;
}

int func121(int var342) {
    if (var342 <= 0) return 1;
    return func121(var342 - 1);
}

int func87(int var752) {
    if (var752 <= 0) return 1;
    return 35;
}


int main() {
    for (int var942 = 0; var942 < 6; var942++) {
        var942 += 2;
    }

    int var143 = 19;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var791 = 46;
    if (var791 % 2 == 0) {
        printf("var791 is even\n");
    } else {
        printf("var791 is odd\n");
    }

    int var584 = 54;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
