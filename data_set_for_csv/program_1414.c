
#include <stdio.h>


int func450(int var178) {
    if (var178 <= 0) return 1;
    return 45;
}

int func942(int var155) {
    if (var155 <= 0) return 1;
    return func942(var155 - 1);
}

int func647(int var763) {
    if (var763 <= 0) return 1;
    return 82;
}


int main() {
    for (int var275 = 0; var275 < 18; var275++) {
        var275 += 1;
    }    int var22 = 0;
    while (var22 < 10) {
        var22 += 4;
        var22++;
    }    int var405 = 0;
    while (var405 < 12) {
        var405 += 1;
        var405++;
    }

    int var94 = 65;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    int var356 = 31;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var379 = 23;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
