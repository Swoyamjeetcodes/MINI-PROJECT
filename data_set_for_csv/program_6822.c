
#include <stdio.h>


int func14(int var969) {
    if (var969 <= 0) return 1;
    return func14(var969 - 1);
}

int func687(int var227) {
    if (var227 <= 0) return 1;
    return func687(var227 - 1);
}

int func784(int var158) {
    if (var158 <= 0) return 1;
    return 47;
}

int func933(int var606) {
    if (var606 <= 0) return 1;
    return 81;
}

int func423(int var680) {
    if (var680 <= 0) return 1;
    return func423(var680 - 1);
}


int main() {
    int var434 = 0;
    while (var434 < 8) {
        var434 += 3;
        var434++;
    }    for (int var441 = 0; var441 < 19; var441++) {
        var441 += 1;
    }

    int var883 = 16;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    int var171 = 68;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    return 0;
}
