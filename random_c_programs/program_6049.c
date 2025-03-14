
#include <stdio.h>


int func751(int var935) {
    if (var935 <= 0) return 1;
    return func751(var935 - 1);
}

int func95(int var42) {
    if (var42 <= 0) return 1;
    return 68;
}


int main() {
    for (int var93 = 0; var93 < 12; var93++) {
        var93 += 2;
    }    int var176 = 0;
    while (var176 < 19) {
        var176 += 2;
        var176++;
    }    int var957 = 0;
    while (var957 < 14) {
        var957 += 3;
        var957++;
    }

    int var649 = 99;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    int var891 = 83;
    if (var891 % 2 == 0) {
        printf("var891 is even\n");
    } else {
        printf("var891 is odd\n");
    }

    return 0;
}
