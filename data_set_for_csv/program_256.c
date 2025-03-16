
#include <stdio.h>


int func7(int var528) {
    if (var528 <= 0) return 1;
    return func7(var528 - 1);
}

int func379(int var411) {
    if (var411 <= 0) return 1;
    return 37;
}

int func471(int var226) {
    if (var226 <= 0) return 1;
    return func471(var226 - 1);
}


int main() {
    for (int var845 = 0; var845 < 5; var845++) {
        var845 += 3;
    }    int var743 = 0;
    while (var743 < 11) {
        var743 += 1;
        var743++;
    }    for (int var109 = 0; var109 < 18; var109++) {
        var109 += 5;
    }

    int var863 = 87;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var188 = 27;
    if (var188 % 2 == 0) {
        printf("var188 is even\n");
    } else {
        printf("var188 is odd\n");
    }

    return 0;
}
