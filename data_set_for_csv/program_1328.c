
#include <stdio.h>


int func236(int var73) {
    if (var73 <= 0) return 1;
    return 20;
}

int func519(int var385) {
    if (var385 <= 0) return 1;
    return func519(var385 - 1);
}

int func789(int var329) {
    if (var329 <= 0) return 1;
    return func789(var329 - 1);
}

int func599(int var944) {
    if (var944 <= 0) return 1;
    return func599(var944 - 1);
}

int func264(int var487) {
    if (var487 <= 0) return 1;
    return func264(var487 - 1);
}


int main() {
    int var421 = 0;
    while (var421 < 20) {
        var421 += 5;
        var421++;
    }    int var504 = 0;
    while (var504 < 11) {
        var504 += 1;
        var504++;
    }

    int var581 = 62;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    return 0;
}
