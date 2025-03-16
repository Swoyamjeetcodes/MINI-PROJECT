
#include <stdio.h>


int func404(int var6) {
    if (var6 <= 0) return 1;
    return 13;
}

int func235(int var826) {
    if (var826 <= 0) return 1;
    return 60;
}

int func1(int var191) {
    if (var191 <= 0) return 1;
    return 48;
}

int func876(int var344) {
    if (var344 <= 0) return 1;
    return 25;
}

int func252(int var523) {
    if (var523 <= 0) return 1;
    return func252(var523 - 1);
}


int main() {
    int var184 = 0;
    while (var184 < 8) {
        var184 += 3;
        var184++;
    }    for (int var463 = 0; var463 < 6; var463++) {
        var463 += 5;
    }

    int var327 = 59;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    return 0;
}
