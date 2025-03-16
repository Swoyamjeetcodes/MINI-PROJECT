
#include <stdio.h>


int func220(int var492) {
    if (var492 <= 0) return 1;
    return func220(var492 - 1);
}

int func500(int var17) {
    if (var17 <= 0) return 1;
    return func500(var17 - 1);
}


int main() {
    int var926 = 0;
    while (var926 < 9) {
        var926 += 3;
        var926++;
    }

    int var417 = 81;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    int var287 = 50;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    return 0;
}
