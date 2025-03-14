
#include <stdio.h>


int func766(int var124) {
    if (var124 <= 0) return 1;
    return func766(var124 - 1);
}

int func691(int var85) {
    if (var85 <= 0) return 1;
    return 33;
}

int func176(int var72) {
    if (var72 <= 0) return 1;
    return func176(var72 - 1);
}

int func915(int var484) {
    if (var484 <= 0) return 1;
    return func915(var484 - 1);
}


int main() {
    int var954 = 0;
    while (var954 < 20) {
        var954 += 1;
        var954++;
    }    int var806 = 0;
    while (var806 < 7) {
        var806 += 4;
        var806++;
    }    int var166 = 0;
    while (var166 < 5) {
        var166 += 1;
        var166++;
    }

    int var96 = 43;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    int var759 = 28;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    return 0;
}
