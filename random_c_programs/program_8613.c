
#include <stdio.h>


int func739(int var391) {
    if (var391 <= 0) return 1;
    return func739(var391 - 1);
}

int func192(int var3) {
    if (var3 <= 0) return 1;
    return func192(var3 - 1);
}

int func965(int var873) {
    if (var873 <= 0) return 1;
    return func965(var873 - 1);
}

int func232(int var312) {
    if (var312 <= 0) return 1;
    return func232(var312 - 1);
}

int func446(int var399) {
    if (var399 <= 0) return 1;
    return 28;
}

int func627(int var308) {
    if (var308 <= 0) return 1;
    return func627(var308 - 1);
}

int func644(int var971) {
    if (var971 <= 0) return 1;
    return 61;
}

int func366(int var184) {
    if (var184 <= 0) return 1;
    return func366(var184 - 1);
}


int main() {
    for (int var471 = 0; var471 < 18; var471++) {
        var471 += 2;
    }    for (int var177 = 0; var177 < 14; var177++) {
        var177 += 1;
    }    int var223 = 0;
    while (var223 < 16) {
        var223 += 2;
        var223++;
    }    int var896 = 0;
    while (var896 < 14) {
        var896 += 1;
        var896++;
    }    for (int var938 = 0; var938 < 18; var938++) {
        var938 += 5;
    }

    int var53 = 44;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    int var347 = 69;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var715 = 77;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var342 = 57;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    return 0;
}
