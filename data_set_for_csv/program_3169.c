
#include <stdio.h>


int func454(int var470) {
    if (var470 <= 0) return 1;
    return func454(var470 - 1);
}


int main() {
    for (int var128 = 0; var128 < 8; var128++) {
        var128 += 2;
    }

    int var262 = 85;
    if (var262 % 2 == 0) {
        printf("var262 is even\n");
    } else {
        printf("var262 is odd\n");
    }

    return 0;
}
