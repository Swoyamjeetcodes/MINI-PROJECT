
#include <stdio.h>


int func917(int var271) {
    if (var271 <= 0) return 1;
    return func917(var271 - 1);
}

int func551(int var76) {
    if (var76 <= 0) return 1;
    return func551(var76 - 1);
}


int main() {
    int var400 = 0;
    while (var400 < 9) {
        var400 += 5;
        var400++;
    }    int var372 = 0;
    while (var372 < 16) {
        var372 += 1;
        var372++;
    }    for (int var679 = 0; var679 < 5; var679++) {
        var679 += 4;
    }

    int var22 = 73;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}
