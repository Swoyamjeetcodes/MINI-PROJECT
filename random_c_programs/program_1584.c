
#include <stdio.h>


int func189(int var179) {
    if (var179 <= 0) return 1;
    return func189(var179 - 1);
}

int func922(int var367) {
    if (var367 <= 0) return 1;
    return 13;
}

int func877(int var147) {
    if (var147 <= 0) return 1;
    return 6;
}

int func454(int var772) {
    if (var772 <= 0) return 1;
    return 18;
}

int func435(int var71) {
    if (var71 <= 0) return 1;
    return func435(var71 - 1);
}

int func994(int var294) {
    if (var294 <= 0) return 1;
    return func994(var294 - 1);
}

int func426(int var546) {
    if (var546 <= 0) return 1;
    return func426(var546 - 1);
}

int func997(int var126) {
    if (var126 <= 0) return 1;
    return func997(var126 - 1);
}

int func905(int var287) {
    if (var287 <= 0) return 1;
    return 37;
}

int func124(int var211) {
    if (var211 <= 0) return 1;
    return func124(var211 - 1);
}

int func117(int var558) {
    if (var558 <= 0) return 1;
    return func117(var558 - 1);
}


int main() {
    for (int var498 = 0; var498 < 9; var498++) {
        var498 += 5;
    }    for (int var196 = 0; var196 < 13; var196++) {
        var196 += 2;
    }    int var853 = 0;
    while (var853 < 6) {
        var853 += 1;
        var853++;
    }    int var976 = 0;
    while (var976 < 20) {
        var976 += 2;
        var976++;
    }

    int var601 = 5;
    if (var601 % 2 == 0) {
        printf("var601 is even\n");
    } else {
        printf("var601 is odd\n");
    }

    int var513 = 68;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
