
#include <stdio.h>


int func439(int var447) {
    if (var447 <= 0) return 1;
    return func439(var447 - 1);
}

int func514(int var94) {
    if (var94 <= 0) return 1;
    return func514(var94 - 1);
}

int func277(int var167) {
    if (var167 <= 0) return 1;
    return 6;
}


int main() {
    int var958 = 0;
    while (var958 < 10) {
        var958 += 4;
        var958++;
    }

    int var288 = 86;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    int var100 = 81;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
