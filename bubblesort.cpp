#include<stdio.h>
#include<conio.h>
main()
{
	int a[5]={51,24,1,27,25};
	int temp,i,j;
	printf("List");
		for(i=0;i<5;i++)
	{
	printf("\n%d",a[i]);
}
	
		for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{

		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			
		}
	
		}
}
printf("\nSorted list:");
	for(i=0;i<5;i++)
	{
	

	printf("\n%d",a[i]);

}


}


