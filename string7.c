void main()
{

    char str1[10];
    char str[20];

    printf("enter the 1st string: ");
    gets(str);
    printf("enter the 2st string: ");
    gets(str1);
    printf("the str1 is: %s\n",strcpy(str,str1));//destination,source
    printf("the str is: %s",str);
    getch();

}
