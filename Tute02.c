/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
	float distence,price;  //variable declaration
    printf("Enter van traveled distence(KM):");  //get inputs from user
    scanf("%f",&distence);
    
    if (distence<=30.0)  //calculation part
    {
    	price=50.0*distence;
	}
    elseif:
    {
    	price=1500.0+(distence-30.0)*40.0;
	}
	
	printf("Your travel charge is:%.2f",price);  //print price
  return 0;
}
