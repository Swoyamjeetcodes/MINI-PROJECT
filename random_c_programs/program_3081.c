
#include <stdio.h>


int func919(int var937) {
    if (var937 <= 0) return 1;
    return func919(var937 - 1);
}

int func677(int var504) {
    if (var504 <= 0) return 1;
    return func677(var504 - 1);
}

int func398(int var554) {
    if (var554 <= 0) return 1;
    return func398(var554 - 1);
}


int main() {
    int var987 = 0;
    while (var987 < 13) {
        var987 += 2;
        var987++;
    }

    int var12 = 16;
    if (var12 % 2 == 0) {
        printf("var12 is even\n");
    } else {
        printf("var12 is odd\n");
    }

    int var112 = 93;
    if (var112 % 2 == 0) {
        printf("var112 is even\n");
    } else {
        printf("var112 is odd\n");
    }

    return 0;
}
