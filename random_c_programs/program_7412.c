
#include <stdio.h>


int func805(int var636) {
    if (var636 <= 0) return 1;
    return func805(var636 - 1);
}

int func297(int var963) {
    if (var963 <= 0) return 1;
    return func297(var963 - 1);
}

int func219(int var288) {
    if (var288 <= 0) return 1;
    return 65;
}

int func431(int var96) {
    if (var96 <= 0) return 1;
    return func431(var96 - 1);
}


int main() {
    int var467 = 0;
    while (var467 < 15) {
        var467 += 1;
        var467++;
    }    int var738 = 0;
    while (var738 < 19) {
        var738 += 2;
        var738++;
    }

    int var268 = 88;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var176 = 84;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
