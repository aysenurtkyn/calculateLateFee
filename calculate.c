#include<stdio.h>

int substractDays(int,int,int,int,int,int);
double calculateLateFee(int);

 int main(void)
 {
 	// below are for the date that the user borrowed the book 
 	int dueDay , dueMonth , dueYear;
 	// below are for the date that the user returned the book 
 	int returnDay , returnMonth , returnYear;
 	// day diffrence between two dates 
 	int dayDifference;
 	// late fee will be returned to lateFee variable
 	double lateFee;
 	printf("enter due date DD MM YY :"); // enter dates in the fallowing format 12 12 2023
 	scanf("%d %d %d ",&dueDay,&dueMonth,&dueYear);
 	printf("enter return date DD MM YY :"); // enter dates in the fallowing format 12 5 2023
 	scanf("%d %d %d",&returnDay,&returnMonth,&returnYear);
 	// call the substractDays fuction
 	dayDifference = substractDays(dueDay,dueMonth,dueYear,returnDay,returnMonth,returnYear);
 	// call the calculateLateFee fuction and get the lateFee
 	lateFee = calculateLateFee(dayDifference);
 	// display the output 
 	printf("You are late %d days and your late fee is %.3lf.",dayDifference,lateFee);
 	

 	
 	return 0;
 }
 
    int substractDays(int dueDay, int dueMonth, int dueYear, int returnDay, int returnMonth, int returnYear)
     {
       int daydifference =  returnDay - dueDay;
       int monthdifference=  returnMonth - dueMonth;
       int yeardifference=  returnYear - dueYear;
       daydifference= daydifference +30 * monthdifference + 360 * yeardifference;
       return daydifference;
       
       
	 }
	 
	 double calculateLateFee(int dayslate)
    {
    	int lateFee;
    	
      if(0< dayslate && dayslate<5)
      {
      	lateFee=10 * dayslate;
	  }
	  else if(dayslate>5 && dayslate<=15)
	  {
	  	lateFee= 5*10 + (dayslate -5) * 15;
	  }
	  else if(dayslate>15 && dayslate<=30)
	  {
	  	lateFee=15*15 +(dayslate-15) *20;
	  }
	  else if(dayslate >30)
	  {
	  	lateFee=dayslate * 20;
	  }
	  else
	  {
	  	printf("the book returned on time\n");
	  }
	  
	  return lateFee;
	  
	  
    	
	}
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
