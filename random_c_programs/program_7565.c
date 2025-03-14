
#include <stdio.h>


int func648(int var519) {
    if (var519 <= 0) return 1;
    return func648(var519 - 1);
}


int main() {
    int var383 = 0;
    while (var383 < 5) {
        var383 += 4;
        var383++;
    }    for (int var232 = 0; var232 < 17; var232++) {
        var232 += 2;
    }    for (int var986 = 0; var986 < 19; var986++) {
        var986 += 5;
    }    for (int var274 = 0; var274 < 20; var274++) {
        var274 += 3;
    }

    int var880 = 15;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    int var964 = 20;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    return 0;
}
