
#include <stdio.h>


int func288(int var685) {
    if (var685 <= 0) return 1;
    return func288(var685 - 1);
}

int func875(int var945) {
    if (var945 <= 0) return 1;
    return 19;
}

int func828(int var384) {
    if (var384 <= 0) return 1;
    return func828(var384 - 1);
}

int func690(int var82) {
    if (var82 <= 0) return 1;
    return func690(var82 - 1);
}


int main() {
    for (int var351 = 0; var351 < 11; var351++) {
        var351 += 4;
    }    for (int var523 = 0; var523 < 17; var523++) {
        var523 += 4;
    }

    int var128 = 71;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
