#include<stdio.h>
 main()
{
	char name[100],temp[100];
	int i,count=0,duplicate,cmp=0;
	
	printf("Enter any string : ");
	scanf("%s",&name);
	
	for(i=0;name[i]!=0;i++)
	{
		temp[i] = name[i];
		count++;
	}
	printf("\nlenth of string = %d\n",count);
	for(i=0;i<count/2;i++)
	{
		duplicate = temp[i];
		temp[i] = temp[count-i-1];
		temp[count-i-1] = duplicate;
	}
	printf("%s\n",temp);
	 
	temp==cmp;
	 
	if(cmp==1){
		printf("Given string is palindrom");
	}
	else{
		printf("Given string is not palindrom");
	}

}