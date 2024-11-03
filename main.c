#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    printf("문자열찾기 프로그램") ;
    char a[100], b ;
    int cnt=0, i ;
    printf("문자열을 입력하십시오. : ") ;
    scanf("%s", a) ;
    printf("찾을 글자를 입력하십시오. :") ;
    scanf(" %c", &b) ;
    for(i=0;a[i]!=NULL;i++){
        if(a[i]==b){
            printf("%c", b) ;
            Sleep(100);
            printf("문") ;
            Sleep(100);
            printf("자") ;
            Sleep(100);
            printf(" ") ;
            Sleep(100);
            printf("%d", i+1) ;
            Sleep(100);
            printf("번") ;
            Sleep(100);
            printf(" ") ;
            Sleep(100);
            printf("째") ;
            Sleep(100);
            printf("에") ;
            Sleep(100);
            printf(" ") ;
            Sleep(100);
            printf("있") ;
            Sleep(100);
            printf("습") ;
            Sleep(100);
            printf("니") ;
            Sleep(100);
            printf("다") ;
            Sleep(100);
            printf(".") ;

        }
    }
}
