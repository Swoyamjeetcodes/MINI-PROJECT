
#include <stdio.h>


int func983(int var716) {
    if (var716 <= 0) return 1;
    return 77;
}

int func241(int var955) {
    if (var955 <= 0) return 1;
    return 68;
}

int func946(int var302) {
    if (var302 <= 0) return 1;
    return 62;
}

int func446(int var401) {
    if (var401 <= 0) return 1;
    return func446(var401 - 1);
}


int main() {
    int var952 = 0;
    while (var952 < 5) {
        var952 += 3;
        var952++;
    }

    int var100 = 46;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    int var988 = 72;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    int var39 = 14;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
