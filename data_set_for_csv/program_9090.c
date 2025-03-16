
#include <stdio.h>


int func13(int var947) {
    if (var947 <= 0) return 1;
    return func13(var947 - 1);
}

int func119(int var152) {
    if (var152 <= 0) return 1;
    return func119(var152 - 1);
}

int func801(int var602) {
    if (var602 <= 0) return 1;
    return func801(var602 - 1);
}

int func862(int var338) {
    if (var338 <= 0) return 1;
    return 24;
}

int func454(int var7) {
    if (var7 <= 0) return 1;
    return func454(var7 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 17) {
        var353 += 4;
        var353++;
    }

    int var897 = 61;
    if (var897 % 2 == 0) {
        printf("var897 is even\n");
    } else {
        printf("var897 is odd\n");
    }

    int var425 = 60;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var246 = 53;
    if (var246 % 2 == 0) {
        printf("var246 is even\n");
    } else {
        printf("var246 is odd\n");
    }

    return 0;
}
