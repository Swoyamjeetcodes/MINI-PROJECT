
#include <stdio.h>


int func938(int var368) {
    if (var368 <= 0) return 1;
    return 85;
}

int func978(int var30) {
    if (var30 <= 0) return 1;
    return func978(var30 - 1);
}

int func219(int var335) {
    if (var335 <= 0) return 1;
    return 70;
}

int func475(int var783) {
    if (var783 <= 0) return 1;
    return func475(var783 - 1);
}

int func513(int var173) {
    if (var173 <= 0) return 1;
    return func513(var173 - 1);
}


int main() {
    for (int var384 = 0; var384 < 15; var384++) {
        var384 += 4;
    }

    int var57 = 53;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var862 = 6;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
