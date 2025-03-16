
#include <stdio.h>


int func183(int var923) {
    if (var923 <= 0) return 1;
    return 50;
}

int func846(int var73) {
    if (var73 <= 0) return 1;
    return 73;
}

int func615(int var767) {
    if (var767 <= 0) return 1;
    return func615(var767 - 1);
}

int func322(int var839) {
    if (var839 <= 0) return 1;
    return 48;
}

int func748(int var658) {
    if (var658 <= 0) return 1;
    return func748(var658 - 1);
}


int main() {
    int var938 = 0;
    while (var938 < 7) {
        var938 += 2;
        var938++;
    }    for (int var746 = 0; var746 < 10; var746++) {
        var746 += 2;
    }    int var217 = 0;
    while (var217 < 14) {
        var217 += 1;
        var217++;
    }

    int var128 = 31;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
