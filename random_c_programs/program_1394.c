
#include <stdio.h>


int func512(int var344) {
    if (var344 <= 0) return 1;
    return func512(var344 - 1);
}

int func977(int var856) {
    if (var856 <= 0) return 1;
    return func977(var856 - 1);
}

int func42(int var152) {
    if (var152 <= 0) return 1;
    return 4;
}

int func476(int var956) {
    if (var956 <= 0) return 1;
    return func476(var956 - 1);
}

int func102(int var157) {
    if (var157 <= 0) return 1;
    return 74;
}

int func255(int var914) {
    if (var914 <= 0) return 1;
    return func255(var914 - 1);
}

int func615(int var562) {
    if (var562 <= 0) return 1;
    return 62;
}

int func20(int var45) {
    if (var45 <= 0) return 1;
    return 17;
}


int main() {
    int var826 = 0;
    while (var826 < 14) {
        var826 += 4;
        var826++;
    }    for (int var582 = 0; var582 < 13; var582++) {
        var582 += 4;
    }    int var726 = 0;
    while (var726 < 12) {
        var726 += 5;
        var726++;
    }

    int var214 = 17;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var451 = 98;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    return 0;
}
