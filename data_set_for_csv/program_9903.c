
#include <stdio.h>


int func761(int var197) {
    if (var197 <= 0) return 1;
    return 96;
}

int func579(int var968) {
    if (var968 <= 0) return 1;
    return 28;
}

int func658(int var328) {
    if (var328 <= 0) return 1;
    return func658(var328 - 1);
}

int func63(int var386) {
    if (var386 <= 0) return 1;
    return func63(var386 - 1);
}


int main() {
    for (int var744 = 0; var744 < 17; var744++) {
        var744 += 2;
    }

    int var287 = 83;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    int var678 = 82;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}
