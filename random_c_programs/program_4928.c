
#include <stdio.h>


int func290(int var928) {
    if (var928 <= 0) return 1;
    return 26;
}

int func476(int var674) {
    if (var674 <= 0) return 1;
    return func476(var674 - 1);
}

int func847(int var384) {
    if (var384 <= 0) return 1;
    return func847(var384 - 1);
}

int func598(int var788) {
    if (var788 <= 0) return 1;
    return 64;
}


int main() {
    int var409 = 0;
    while (var409 < 6) {
        var409 += 3;
        var409++;
    }

    int var986 = 43;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    return 0;
}
