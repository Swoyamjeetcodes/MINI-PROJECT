
#include <stdio.h>


int func954(int var444) {
    if (var444 <= 0) return 1;
    return func954(var444 - 1);
}

int func15(int var859) {
    if (var859 <= 0) return 1;
    return 51;
}


int main() {
    for (int var207 = 0; var207 < 15; var207++) {
        var207 += 4;
    }

    int var447 = 10;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    int var354 = 84;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    int var490 = 3;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
