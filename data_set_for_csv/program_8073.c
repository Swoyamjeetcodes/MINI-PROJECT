
#include <stdio.h>


int func295(int var359) {
    if (var359 <= 0) return 1;
    return func295(var359 - 1);
}

int func669(int var615) {
    if (var615 <= 0) return 1;
    return func669(var615 - 1);
}

int func987(int var117) {
    if (var117 <= 0) return 1;
    return func987(var117 - 1);
}

int func668(int var850) {
    if (var850 <= 0) return 1;
    return func668(var850 - 1);
}


int main() {
    int var90 = 0;
    while (var90 < 6) {
        var90 += 5;
        var90++;
    }    for (int var306 = 0; var306 < 7; var306++) {
        var306 += 4;
    }    int var37 = 0;
    while (var37 < 6) {
        var37 += 5;
        var37++;
    }

    int var600 = 73;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    int var967 = 41;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    return 0;
}
