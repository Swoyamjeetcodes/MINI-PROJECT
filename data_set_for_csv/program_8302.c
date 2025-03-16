
#include <stdio.h>


int func28(int var963) {
    if (var963 <= 0) return 1;
    return 45;
}

int func252(int var256) {
    if (var256 <= 0) return 1;
    return 67;
}

int func123(int var731) {
    if (var731 <= 0) return 1;
    return 33;
}

int func453(int var89) {
    if (var89 <= 0) return 1;
    return 40;
}

int func904(int var854) {
    if (var854 <= 0) return 1;
    return func904(var854 - 1);
}

int func251(int var18) {
    if (var18 <= 0) return 1;
    return 18;
}

int func149(int var865) {
    if (var865 <= 0) return 1;
    return func149(var865 - 1);
}


int main() {
    for (int var595 = 0; var595 < 11; var595++) {
        var595 += 2;
    }

    int var764 = 26;
    if (var764 % 2 == 0) {
        printf("var764 is even\n");
    } else {
        printf("var764 is odd\n");
    }

    int var403 = 1;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    int var294 = 57;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    return 0;
}
