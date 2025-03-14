
#include <stdio.h>


int func558(int var349) {
    if (var349 <= 0) return 1;
    return func558(var349 - 1);
}

int func866(int var179) {
    if (var179 <= 0) return 1;
    return func866(var179 - 1);
}

int func326(int var836) {
    if (var836 <= 0) return 1;
    return func326(var836 - 1);
}


int main() {
    for (int var100 = 0; var100 < 14; var100++) {
        var100 += 4;
    }    int var718 = 0;
    while (var718 < 18) {
        var718 += 1;
        var718++;
    }    for (int var31 = 0; var31 < 18; var31++) {
        var31 += 1;
    }

    int var972 = 82;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var771 = 95;
    if (var771 % 2 == 0) {
        printf("var771 is even\n");
    } else {
        printf("var771 is odd\n");
    }

    int var976 = 56;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
