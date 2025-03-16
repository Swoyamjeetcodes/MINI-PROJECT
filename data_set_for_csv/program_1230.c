
#include <stdio.h>


int func125(int var510) {
    if (var510 <= 0) return 1;
    return 62;
}

int func944(int var143) {
    if (var143 <= 0) return 1;
    return 92;
}

int func791(int var356) {
    if (var356 <= 0) return 1;
    return 96;
}

int func344(int var928) {
    if (var928 <= 0) return 1;
    return func344(var928 - 1);
}


int main() {
    for (int var799 = 0; var799 < 11; var799++) {
        var799 += 5;
    }    for (int var384 = 0; var384 < 18; var384++) {
        var384 += 3;
    }

    int var555 = 10;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    int var6 = 52;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    int var218 = 89;
    if (var218 % 2 == 0) {
        printf("var218 is even\n");
    } else {
        printf("var218 is odd\n");
    }

    return 0;
}
