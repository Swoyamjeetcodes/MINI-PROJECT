
#include <stdio.h>


int func135(int var126) {
    if (var126 <= 0) return 1;
    return func135(var126 - 1);
}

int func500(int var865) {
    if (var865 <= 0) return 1;
    return func500(var865 - 1);
}

int func681(int var326) {
    if (var326 <= 0) return 1;
    return func681(var326 - 1);
}

int func329(int var817) {
    if (var817 <= 0) return 1;
    return func329(var817 - 1);
}


int main() {
    int var565 = 0;
    while (var565 < 11) {
        var565 += 1;
        var565++;
    }

    int var591 = 17;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    int var203 = 72;
    if (var203 % 2 == 0) {
        printf("var203 is even\n");
    } else {
        printf("var203 is odd\n");
    }

    return 0;
}
