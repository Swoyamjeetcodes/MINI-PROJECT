
#include <stdio.h>


int func805(int var342) {
    if (var342 <= 0) return 1;
    return 31;
}

int func640(int var695) {
    if (var695 <= 0) return 1;
    return 16;
}

int func291(int var845) {
    if (var845 <= 0) return 1;
    return 74;
}

int func594(int var744) {
    if (var744 <= 0) return 1;
    return func594(var744 - 1);
}


int main() {
    for (int var234 = 0; var234 < 9; var234++) {
        var234 += 5;
    }    int var914 = 0;
    while (var914 < 9) {
        var914 += 3;
        var914++;
    }    for (int var500 = 0; var500 < 15; var500++) {
        var500 += 1;
    }

    int var256 = 80;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    int var963 = 39;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
