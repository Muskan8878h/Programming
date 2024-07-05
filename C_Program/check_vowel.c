#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int vowel=0;//count length
    int cons=0; //count length

    char vo[10]={0};
    char con[10]={0};

    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vo[vowel]=str[i];
            vowel++;
        }  
        else if(str[i]>='a'  && str[i]<='z' || str[i]>='A'  && str[i]<='Z' ) {
            con[cons]=str[i];
            cons++;

        } 
    }
    for(int i=0;i<vowel;i++){
        printf("%c",vo[i]);
    }
    printf("\n");
    for(int i=0;i<cons;i++){
        printf("%c",con[i]);
    }
    printf("\n");
    printf("vowels are %d\n",vowel);
    printf("consonent are %d\n",cons);
}
