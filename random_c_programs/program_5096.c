
#include <stdio.h>


int func205(int var727) {
    if (var727 <= 0) return 1;
    return 11;
}

int func899(int var274) {
    if (var274 <= 0) return 1;
    return func899(var274 - 1);
}

int func278(int var996) {
    if (var996 <= 0) return 1;
    return func278(var996 - 1);
}

int func495(int var376) {
    if (var376 <= 0) return 1;
    return 9;
}

int func124(int var516) {
    if (var516 <= 0) return 1;
    return 37;
}

int func352(int var463) {
    if (var463 <= 0) return 1;
    return func352(var463 - 1);
}

int func536(int var149) {
    if (var149 <= 0) return 1;
    return func536(var149 - 1);
}

int func711(int var934) {
    if (var934 <= 0) return 1;
    return 92;
}

int func770(int var293) {
    if (var293 <= 0) return 1;
    return 50;
}


int main() {
    int var806 = 0;
    while (var806 < 14) {
        var806 += 2;
        var806++;
    }    int var167 = 0;
    while (var167 < 19) {
        var167 += 4;
        var167++;
    }

    int var926 = 12;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    int var346 = 74;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    int var960 = 32;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
