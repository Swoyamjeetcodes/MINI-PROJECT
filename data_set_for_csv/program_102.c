
#include <stdio.h>


int func875(int var181) {
    if (var181 <= 0) return 1;
    return func875(var181 - 1);
}

int func164(int var865) {
    if (var865 <= 0) return 1;
    return func164(var865 - 1);
}

int func919(int var271) {
    if (var271 <= 0) return 1;
    return func919(var271 - 1);
}

int func473(int var365) {
    if (var365 <= 0) return 1;
    return 60;
}


int main() {
    int var361 = 0;
    while (var361 < 8) {
        var361 += 1;
        var361++;
    }

    int var626 = 48;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    int var100 = 42;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    int var563 = 42;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    return 0;
}
