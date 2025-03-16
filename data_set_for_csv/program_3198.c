
#include <stdio.h>


int func863(int var655) {
    if (var655 <= 0) return 1;
    return func863(var655 - 1);
}

int func534(int var675) {
    if (var675 <= 0) return 1;
    return 81;
}

int func905(int var150) {
    if (var150 <= 0) return 1;
    return 3;
}


int main() {
    int var278 = 0;
    while (var278 < 9) {
        var278 += 2;
        var278++;
    }    int var795 = 0;
    while (var795 < 20) {
        var795 += 3;
        var795++;
    }    for (int var201 = 0; var201 < 12; var201++) {
        var201 += 5;
    }

    int var175 = 17;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    return 0;
}
