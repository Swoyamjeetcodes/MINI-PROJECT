
#include <stdio.h>


int func793(int var311) {
    if (var311 <= 0) return 1;
    return func793(var311 - 1);
}

int func905(int var34) {
    if (var34 <= 0) return 1;
    return func905(var34 - 1);
}

int func713(int var348) {
    if (var348 <= 0) return 1;
    return func713(var348 - 1);
}


int main() {
    for (int var544 = 0; var544 < 19; var544++) {
        var544 += 2;
    }    int var97 = 0;
    while (var97 < 19) {
        var97 += 5;
        var97++;
    }

    int var593 = 59;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
