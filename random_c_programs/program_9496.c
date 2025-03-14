
#include <stdio.h>


int func697(int var734) {
    if (var734 <= 0) return 1;
    return 92;
}

int func277(int var542) {
    if (var542 <= 0) return 1;
    return func277(var542 - 1);
}


int main() {
    for (int var19 = 0; var19 < 19; var19++) {
        var19 += 3;
    }    int var933 = 0;
    while (var933 < 18) {
        var933 += 3;
        var933++;
    }    int var206 = 0;
    while (var206 < 10) {
        var206 += 3;
        var206++;
    }

    int var292 = 1;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var217 = 49;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    return 0;
}
