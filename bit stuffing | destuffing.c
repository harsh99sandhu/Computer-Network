#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,k=0,count=0;
 char bits[80],debits[80];

 printf("Enter Data Bits:\n");
 scanf("%s",bits);
 
 printf("Data Bits after Bit Stuffing:\n");
  
 for(i=0; i<strlen(bits); i++)
 {
    if(bits[i]=='1')
        count++;
    else
        count=0;
    printf("%c",bits[i]);
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }
 
 printf("\nEnter data Bits for Bit Destuffing:\n");
 scanf("%s",debits);
  count=0;
 for(i=0;i<strlen(debits);i++)
 {
 	if(debits[i]=='1')
		count++;
	else
		count=0;
	if(count==5)
	{
		i=i+1;
		for(k=i;k<strlen(debits);k++)
		debits[k]=debits[k+1];
		debits[k]='\0';
		i=i-1;
	}
 }
 
 printf("Data Bits after Bit Destuffing:\n%s",debits);

return 0;
}


