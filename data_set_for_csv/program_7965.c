
#include <stdio.h>


int func442(int var869) {
    if (var869 <= 0) return 1;
    return 66;
}

int func597(int var658) {
    if (var658 <= 0) return 1;
    return func597(var658 - 1);
}

int func947(int var841) {
    if (var841 <= 0) return 1;
    return func947(var841 - 1);
}

int func683(int var860) {
    if (var860 <= 0) return 1;
    return func683(var860 - 1);
}

int func372(int var225) {
    if (var225 <= 0) return 1;
    return func372(var225 - 1);
}

int func233(int var734) {
    if (var734 <= 0) return 1;
    return func233(var734 - 1);
}


int main() {
    for (int var744 = 0; var744 < 16; var744++) {
        var744 += 5;
    }    int var507 = 0;
    while (var507 < 17) {
        var507 += 1;
        var507++;
    }    int var370 = 0;
    while (var370 < 17) {
        var370 += 2;
        var370++;
    }    int var143 = 0;
    while (var143 < 8) {
        var143 += 2;
        var143++;
    }

    int var808 = 19;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    int var881 = 54;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    int var408 = 77;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    int var44 = 11;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
