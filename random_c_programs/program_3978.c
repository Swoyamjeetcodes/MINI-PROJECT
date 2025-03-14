
#include <stdio.h>


int func202(int var851) {
    if (var851 <= 0) return 1;
    return 39;
}

int func126(int var635) {
    if (var635 <= 0) return 1;
    return func126(var635 - 1);
}

int func551(int var258) {
    if (var258 <= 0) return 1;
    return func551(var258 - 1);
}

int func934(int var391) {
    if (var391 <= 0) return 1;
    return func934(var391 - 1);
}


int main() {
    for (int var850 = 0; var850 < 8; var850++) {
        var850 += 3;
    }    int var270 = 0;
    while (var270 < 8) {
        var270 += 5;
        var270++;
    }    for (int var425 = 0; var425 < 13; var425++) {
        var425 += 1;
    }    int var886 = 0;
    while (var886 < 20) {
        var886 += 1;
        var886++;
    }    for (int var989 = 0; var989 < 20; var989++) {
        var989 += 5;
    }

    int var836 = 40;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    int var981 = 64;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var491 = 69;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    return 0;
}
