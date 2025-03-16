
#include <stdio.h>


int func681(int var345) {
    if (var345 <= 0) return 1;
    return func681(var345 - 1);
}

int func418(int var667) {
    if (var667 <= 0) return 1;
    return func418(var667 - 1);
}

int func598(int var525) {
    if (var525 <= 0) return 1;
    return 13;
}

int func793(int var162) {
    if (var162 <= 0) return 1;
    return 74;
}

int func767(int var328) {
    if (var328 <= 0) return 1;
    return 60;
}


int main() {
    int var989 = 0;
    while (var989 < 14) {
        var989 += 2;
        var989++;
    }    for (int var383 = 0; var383 < 14; var383++) {
        var383 += 2;
    }

    int var140 = 63;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var950 = 27;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    int var954 = 68;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    return 0;
}
