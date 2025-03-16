
#include <stdio.h>


int func421(int var530) {
    if (var530 <= 0) return 1;
    return func421(var530 - 1);
}

int func935(int var645) {
    if (var645 <= 0) return 1;
    return func935(var645 - 1);
}

int func210(int var180) {
    if (var180 <= 0) return 1;
    return 95;
}

int func645(int var441) {
    if (var441 <= 0) return 1;
    return 79;
}


int main() {
    for (int var667 = 0; var667 < 7; var667++) {
        var667 += 3;
    }

    int var920 = 83;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var82 = 25;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var626 = 27;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    return 0;
}
