
#include <stdio.h>


int func4(int var186) {
    if (var186 <= 0) return 1;
    return func4(var186 - 1);
}


int main() {
    int var26 = 0;
    while (var26 < 20) {
        var26 += 1;
        var26++;
    }    for (int var716 = 0; var716 < 10; var716++) {
        var716 += 5;
    }    for (int var928 = 0; var928 < 13; var928++) {
        var928 += 5;
    }

    int var677 = 5;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    int var727 = 75;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    int var956 = 12;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
