
#include <stdio.h>


int func337(int var133) {
    if (var133 <= 0) return 1;
    return func337(var133 - 1);
}

int func429(int var994) {
    if (var994 <= 0) return 1;
    return 5;
}

int func857(int var427) {
    if (var427 <= 0) return 1;
    return func857(var427 - 1);
}

int func268(int var755) {
    if (var755 <= 0) return 1;
    return func268(var755 - 1);
}

int func629(int var676) {
    if (var676 <= 0) return 1;
    return func629(var676 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 5) {
        var279 += 5;
        var279++;
    }    int var759 = 0;
    while (var759 < 15) {
        var759 += 2;
        var759++;
    }    for (int var574 = 0; var574 < 6; var574++) {
        var574 += 2;
    }    for (int var578 = 0; var578 < 15; var578++) {
        var578 += 3;
    }

    int var461 = 67;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    return 0;
}
