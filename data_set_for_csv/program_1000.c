
#include <stdio.h>


int func395(int var526) {
    if (var526 <= 0) return 1;
    return 29;
}

int func736(int var110) {
    if (var110 <= 0) return 1;
    return func736(var110 - 1);
}

int func718(int var552) {
    if (var552 <= 0) return 1;
    return func718(var552 - 1);
}

int func145(int var173) {
    if (var173 <= 0) return 1;
    return 32;
}

int func221(int var364) {
    if (var364 <= 0) return 1;
    return func221(var364 - 1);
}

int func124(int var87) {
    if (var87 <= 0) return 1;
    return 41;
}


int main() {
    int var174 = 0;
    while (var174 < 12) {
        var174 += 3;
        var174++;
    }

    int var214 = 20;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    return 0;
}
