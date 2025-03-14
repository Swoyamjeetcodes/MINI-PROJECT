
#include <stdio.h>


int func12(int var333) {
    if (var333 <= 0) return 1;
    return 15;
}

int func268(int var346) {
    if (var346 <= 0) return 1;
    return func268(var346 - 1);
}

int func408(int var933) {
    if (var933 <= 0) return 1;
    return 51;
}

int func110(int var237) {
    if (var237 <= 0) return 1;
    return 60;
}

int func952(int var948) {
    if (var948 <= 0) return 1;
    return 49;
}

int func281(int var919) {
    if (var919 <= 0) return 1;
    return func281(var919 - 1);
}

int func774(int var881) {
    if (var881 <= 0) return 1;
    return func774(var881 - 1);
}

int func399(int var542) {
    if (var542 <= 0) return 1;
    return 43;
}

int func956(int var901) {
    if (var901 <= 0) return 1;
    return func956(var901 - 1);
}

int func299(int var356) {
    if (var356 <= 0) return 1;
    return func299(var356 - 1);
}


int main() {
    int var178 = 0;
    while (var178 < 8) {
        var178 += 2;
        var178++;
    }

    int var430 = 68;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    int var923 = 31;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
