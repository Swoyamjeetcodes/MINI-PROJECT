
#include <stdio.h>


int func898(int var894) {
    if (var894 <= 0) return 1;
    return func898(var894 - 1);
}

int func58(int var787) {
    if (var787 <= 0) return 1;
    return func58(var787 - 1);
}


int main() {
    for (int var240 = 0; var240 < 5; var240++) {
        var240 += 5;
    }

    int var414 = 97;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    int var56 = 75;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    int var599 = 70;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    return 0;
}
