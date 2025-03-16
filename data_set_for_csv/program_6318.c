
#include <stdio.h>


int func411(int var316) {
    if (var316 <= 0) return 1;
    return 97;
}

int func415(int var523) {
    if (var523 <= 0) return 1;
    return func415(var523 - 1);
}

int func615(int var314) {
    if (var314 <= 0) return 1;
    return 95;
}


int main() {
    for (int var18 = 0; var18 < 11; var18++) {
        var18 += 4;
    }    for (int var296 = 0; var296 < 7; var296++) {
        var296 += 1;
    }    int var347 = 0;
    while (var347 < 6) {
        var347 += 2;
        var347++;
    }

    int var766 = 78;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
