
#include <stdio.h>


int func476(int var87) {
    if (var87 <= 0) return 1;
    return func476(var87 - 1);
}

int func232(int var224) {
    if (var224 <= 0) return 1;
    return func232(var224 - 1);
}

int func885(int var894) {
    if (var894 <= 0) return 1;
    return func885(var894 - 1);
}


int main() {
    for (int var743 = 0; var743 < 16; var743++) {
        var743 += 3;
    }

    int var254 = 8;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    int var956 = 39;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    int var297 = 16;
    if (var297 % 2 == 0) {
        printf("var297 is even\n");
    } else {
        printf("var297 is odd\n");
    }

    return 0;
}
