
#include <stdio.h>


int func233(int var113) {
    if (var113 <= 0) return 1;
    return func233(var113 - 1);
}


int main() {
    int var509 = 0;
    while (var509 < 20) {
        var509 += 5;
        var509++;
    }

    int var545 = 59;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    int var812 = 15;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
