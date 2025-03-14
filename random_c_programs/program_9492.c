
#include <stdio.h>


int func538(int var216) {
    if (var216 <= 0) return 1;
    return func538(var216 - 1);
}

int func546(int var959) {
    if (var959 <= 0) return 1;
    return func546(var959 - 1);
}


int main() {
    int var815 = 0;
    while (var815 < 20) {
        var815 += 1;
        var815++;
    }    int var707 = 0;
    while (var707 < 15) {
        var707 += 5;
        var707++;
    }    int var498 = 0;
    while (var498 < 18) {
        var498 += 4;
        var498++;
    }    int var283 = 0;
    while (var283 < 5) {
        var283 += 4;
        var283++;
    }    for (int var913 = 0; var913 < 6; var913++) {
        var913 += 4;
    }

    int var746 = 23;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
