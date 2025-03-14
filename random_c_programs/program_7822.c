
#include <stdio.h>


int func332(int var689) {
    if (var689 <= 0) return 1;
    return func332(var689 - 1);
}

int func463(int var140) {
    if (var140 <= 0) return 1;
    return 18;
}

int func811(int var864) {
    if (var864 <= 0) return 1;
    return func811(var864 - 1);
}


int main() {
    int var870 = 0;
    while (var870 < 10) {
        var870 += 3;
        var870++;
    }    int var176 = 0;
    while (var176 < 11) {
        var176 += 5;
        var176++;
    }    for (int var777 = 0; var777 < 14; var777++) {
        var777 += 4;
    }

    int var155 = 69;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    int var117 = 23;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    int var963 = 85;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
