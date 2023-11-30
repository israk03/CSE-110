// count the number of vowels and consonants in sring using pointer.

#include<stdio.h>

void count_vow_cons(const char *str, int* vowel, int* consonant){
    *vowel = 0;
    *consonant = 0;

    while(*str != '\0'){
        char temp = *str;
        if(temp >= 'A' && temp <= 'Z'){
            temp += 'a' - 'A';
        }

        if(temp >= 'a' && temp <= 'z'){
            if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u'){
                (*vowel)++;
            }
            else{
                (*consonant)++;
            }
        }
        str++;
    }

}
int main(){
    char s[100];
    int v, c;

    printf("Enter a line or word: ");
    fgets(s, sizeof(s), stdin);

    count_vow_cons(&s, &v, &c);

    printf("VOWEL = %d\n", v);
    printf("CONSONANT = %d", c);

    return 0;
}