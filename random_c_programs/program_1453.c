
#include <stdio.h>


int func581(int var650) {
    if (var650 <= 0) return 1;
    return 34;
}

int func522(int var917) {
    if (var917 <= 0) return 1;
    return func522(var917 - 1);
}


int main() {
    for (int var501 = 0; var501 < 9; var501++) {
        var501 += 1;
    }    int var176 = 0;
    while (var176 < 13) {
        var176 += 4;
        var176++;
    }

    int var224 = 58;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    int var380 = 24;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
