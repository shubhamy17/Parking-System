#include<stdio.h>
#include<string.h>


struct vehical
{
	char oname[20],vname[20];
	int date,timing;


};






int main()
{
	struct vehical t[100],f[100],b[100];
	int n,i,option,sort;
	int amount=0,noft=0,noff=0,nofb=0,count=0;
	
	do
	{	
	printf("\n press<1> to insert data of two-wheelers cost = 50rs/-");
	printf("\n press<2> to insert data of four-wheelers cost = 100rs/-");
	printf("\n press<3> to insert data of Bus cost = 200rs/-");
	printf("\n press<4> to display data");
	printf("\n press<5> to Sort by Date of Parking");
	printf("\n enter your option: ");
	scanf("%d" , &option);
	
	if(option == 1)
	{
		printf("\n how many two-wheelers you want to insert: ");
		scanf("%d",&n);
		for(i=1 ; i <= n ; i++)
		{
			printf("\n Enter name of Owner: ");
			scanf("%s" , t[i].oname);
			printf("\n Enter Name of Vehical: ");
			scanf("%s" , t[i].vname);
			printf("\n enter date of parking(date dd only): ");
			scanf("%d" , &t[i].date);
			printf("\n Enter timing(hr) of parking(in 24hr system): ");
			scanf("%d" , &t[i].timing);
			noft++;
			amount = amount + 50;
			count++;

		}

	}


	if(option == 2)
	{
		printf("\n how many four-wheelers you want to insert: ");
		scanf("%d",&n);
		for(i=1 ; i <= n ; i++)
		{
			printf("\n Enter name of Owner: ");
			scanf("%s" , f[i].oname);
			printf("\n Enter Name of Vehical: ");
			scanf("%s" , f[i].vname);
			printf("\n enter date of parking(date dd only): ");
			scanf("%d" , &f[i].date);
			printf("\n Enter timing(hr) of parking(in 24hr system): ");
			scanf("%d" , &f[i].timing);
			noff++;
			amount = amount +100;
			count++;

		}

	}


	if(option == 3)
	{
		printf("\n how many Buses you want to insert: ") ;
		scanf("%d",&n);
		for(i=1 ; i <= n ; i++)
		{
			printf("\n Enter name of Owner: ");
			scanf("%s" , b[i].oname);
			printf("\n Enter Name of Vehical: ");
			scanf("%s" , b[i].vname);
			printf("\n enter date of parking(date dd only): ");
			scanf("%d" , &b[i].date);
			printf("\n Enter timing(hr) of parking(in 24hr system): ");
			scanf("%d" , &b[i].timing);
			nofb++;
			amount = amount + 200;
			count++;

		}

	}

//********************************************************************************************
	if(option == 4)
	{
		printf("\n\n ******************OUTPUT******************* ");
		printf("\n The total Vehical Parked in the ground:%d" , count);
		printf("\n The amount collected is  %d rs only/- \n\n", amount);
		

		printf("\n List of Two wheelers:");
		printf("\n Name of Owner\tName of Vehical\tDateofParking\ttiming \n======================================================================= \n");
		for(i=1 ; i<=noft ; i++)
		{
			printf("\n%s\t\t%s\t\t%d\t\t%d" , t[i].oname,t[i].vname,t[i].date,t[i].timing);		
		}

		printf("\n\n\n List of four wheelers:");
		printf("\n Name of Owner\tName of Vehical\tDateofParking\ttiming \n======================================================================= \n");
		for(i=1 ; i<=noff ; i++)
		{
			printf("\n%s\t\t%s\t\t%d\t\t%d" , f[i].oname,f[i].vname,f[i].date,f[i].timing);		
		}

		printf("\n\n\n List of Buseswheelers:");
		printf("\n Name of Owner\tName of Vehical\tDateofParking\ttiming \n======================================================================= \n");
		for(i=1 ; i<=nofb ; i++)
		{
			printf("\n%s\t%s\t\t%d\t\t%d" , b[i].oname,b[i].vname,b[i].date,b[i].timing);		
		}
 
		printf("\n\n\n\n***Thank You***\t project by Bhopu,Vandana,Shubham,Mangesh***");
	}


	if(option == 5)
	{
		printf("\n\n Select date by which you want to sort");
		scanf("%d" , &sort);
		printf("\n\n\n List of persons who had parked on date %d" ,sort);
		printf("\n Name of Owner\tName of Vehical\tDateofParking\ttiming \n======================================================================= \n");
		
	
		for(i=1 ; i<=noft ; i++)
		{
			if(t[i].date == sort)
			{
				printf("\n%s\t\t%s\t\t%d\t\t%d" , t[i].oname,t[i].vname,t[i].date,t[i].timing);
			}		
		}
		
		for(i=1 ; i<=noff ; i++)
		{
			if(f[i].date == sort)
			{
				printf("\n%s\t\t%s\t\t%d\t\t%d" , f[i].oname,f[i].vname,f[i].date,f[i].timing);	
			}	
		}
		
		for(i=1 ; i<=nofb ; i++)
		{
			if(b[i].date == sort)
			{
			printf("\n%s\t%s\t\t%d\t\t%d" , b[i].oname,b[i].vname,b[i].date,b[i].timing);
			}		
		}
 


	}




	

}while(option != 5);
}
