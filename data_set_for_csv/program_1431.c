
#include <stdio.h>


int func120(int var800) {
    if (var800 <= 0) return 1;
    return 30;
}

int func691(int var558) {
    if (var558 <= 0) return 1;
    return 51;
}

int func261(int var926) {
    if (var926 <= 0) return 1;
    return 93;
}

int func438(int var792) {
    if (var792 <= 0) return 1;
    return func438(var792 - 1);
}

int func515(int var286) {
    if (var286 <= 0) return 1;
    return 80;
}

int func526(int var230) {
    if (var230 <= 0) return 1;
    return func526(var230 - 1);
}

int func856(int var439) {
    if (var439 <= 0) return 1;
    return 36;
}

int func107(int var156) {
    if (var156 <= 0) return 1;
    return 55;
}

int func391(int var345) {
    if (var345 <= 0) return 1;
    return 35;
}

int func803(int var549) {
    if (var549 <= 0) return 1;
    return func803(var549 - 1);
}

int func657(int var287) {
    if (var287 <= 0) return 1;
    return func657(var287 - 1);
}


int main() {
    for (int var2 = 0; var2 < 5; var2++) {
        var2 += 2;
    }

    int var62 = 95;
    if (var62 % 2 == 0) {
        printf("var62 is even\n");
    } else {
        printf("var62 is odd\n");
    }

    return 0;
}
