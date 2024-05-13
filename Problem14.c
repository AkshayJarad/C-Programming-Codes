//Accept a String from user and Convert it into Capital 

#include<stdio.h>

char DisplayConvert( char Cvalue)
{
    if( Cvalue >= 'a' && Cvalue <= 'z' )
    { 
        Cvalue = Cvalue - 'a' + 'A';
        printf("%c",Cvalue);
    }
    else if (Cvalue >= 'A' && Cvalue <= 'Z')
    {
        Cvalue = Cvalue - 'A' + 'a';
        printf("%c",Cvalue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}