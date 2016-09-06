#include <stdio.h>

void main()
{
    int i, j, a, n,delete,count=0,num,numc;
        int number[30];
	  
	     printf("\n Enter the number");
	        scanf("%d",&num);
		   printf("\n enter the number of digits to be deleted");
		      scanf("%d",&delete);
		       
		          numc=num;
			      while(numc!=0)
			        {
			      numc/=10;
		            ++count;
			      }
			       n=count;
						        
			 if(delete<=count)
		  {
		       for(i=count-1;i>=0;i--)
	            	{number[i]=num%10;
			  num=num/10;
									 
	      	}
															     	
																     	
			 for (i = 0; i < n; ++i)
		  {
		             for (j = i + 1; j < n; ++j)
		        {
			                 if (number[i] > number[j])
			             {
				                     a =  number[i];
			                     number[i] = number[j];
                    		                     number[j] = a;
		                      }
			  }
		  }
    	printf("\n The least integer after deleting %d digits is",delete);
			for(i=0;i<count-delete;i++)
	      	     {
				printf("\n %d",number[i]);
		       }
      }
       else
       printf("\n No of digits to be deleted is greater than the entered digits of the integer . Try Again");
 }
