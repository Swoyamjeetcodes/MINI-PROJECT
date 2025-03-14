
#include <stdio.h>


int func695(int var207) {
    if (var207 <= 0) return 1;
    return 77;
}

int func612(int var327) {
    if (var327 <= 0) return 1;
    return func612(var327 - 1);
}

int func134(int var703) {
    if (var703 <= 0) return 1;
    return func134(var703 - 1);
}

int func760(int var110) {
    if (var110 <= 0) return 1;
    return func760(var110 - 1);
}


int main() {
    int var944 = 0;
    while (var944 < 11) {
        var944 += 1;
        var944++;
    }    int var788 = 0;
    while (var788 < 12) {
        var788 += 3;
        var788++;
    }

    int var785 = 43;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    return 0;
}
