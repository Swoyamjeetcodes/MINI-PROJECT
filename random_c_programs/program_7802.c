
#include <stdio.h>


int func281(int var640) {
    if (var640 <= 0) return 1;
    return 34;
}

int func757(int var470) {
    if (var470 <= 0) return 1;
    return 60;
}

int func603(int var221) {
    if (var221 <= 0) return 1;
    return func603(var221 - 1);
}

int func197(int var456) {
    if (var456 <= 0) return 1;
    return 75;
}


int main() {
    for (int var956 = 0; var956 < 11; var956++) {
        var956 += 2;
    }

    int var858 = 98;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    int var847 = 26;
    if (var847 % 2 == 0) {
        printf("var847 is even\n");
    } else {
        printf("var847 is odd\n");
    }

    return 0;
}
