
#include <stdio.h>


int func162(int var79) {
    if (var79 <= 0) return 1;
    return func162(var79 - 1);
}

int func971(int var427) {
    if (var427 <= 0) return 1;
    return func971(var427 - 1);
}

int func306(int var125) {
    if (var125 <= 0) return 1;
    return 7;
}

int func321(int var930) {
    if (var930 <= 0) return 1;
    return func321(var930 - 1);
}

int func844(int var682) {
    if (var682 <= 0) return 1;
    return func844(var682 - 1);
}

int func138(int var931) {
    if (var931 <= 0) return 1;
    return func138(var931 - 1);
}

int func453(int var68) {
    if (var68 <= 0) return 1;
    return 42;
}


int main() {
    int var365 = 0;
    while (var365 < 18) {
        var365 += 3;
        var365++;
    }    int var102 = 0;
    while (var102 < 10) {
        var102 += 1;
        var102++;
    }    int var63 = 0;
    while (var63 < 12) {
        var63 += 3;
        var63++;
    }    for (int var873 = 0; var873 < 10; var873++) {
        var873 += 4;
    }

    int var806 = 43;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    int var226 = 76;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
