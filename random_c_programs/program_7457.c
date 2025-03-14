
#include <stdio.h>


int func249(int var321) {
    if (var321 <= 0) return 1;
    return func249(var321 - 1);
}

int func648(int var579) {
    if (var579 <= 0) return 1;
    return func648(var579 - 1);
}

int func258(int var425) {
    if (var425 <= 0) return 1;
    return func258(var425 - 1);
}

int func205(int var508) {
    if (var508 <= 0) return 1;
    return 24;
}

int func510(int var584) {
    if (var584 <= 0) return 1;
    return func510(var584 - 1);
}

int func344(int var754) {
    if (var754 <= 0) return 1;
    return func344(var754 - 1);
}

int func961(int var387) {
    if (var387 <= 0) return 1;
    return func961(var387 - 1);
}

int func616(int var877) {
    if (var877 <= 0) return 1;
    return 34;
}


int main() {
    for (int var350 = 0; var350 < 13; var350++) {
        var350 += 2;
    }    for (int var289 = 0; var289 < 17; var289++) {
        var289 += 2;
    }    int var276 = 0;
    while (var276 < 19) {
        var276 += 3;
        var276++;
    }    for (int var401 = 0; var401 < 18; var401++) {
        var401 += 4;
    }    for (int var49 = 0; var49 < 7; var49++) {
        var49 += 5;
    }

    int var356 = 58;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var895 = 95;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}
