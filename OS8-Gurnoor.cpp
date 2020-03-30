#include <bits/stdc++.h> 
using namespace std;


void Details();
void checkDetails(int,int); 
int IngredientCalculator(int, int);




int chefs, Ingredients;

int main() 
{ 

    Details();
	cout << "Total ingredients required so that "<<chefs<<" Chefs can make their dishes with No Deadlock are :"<<IngredientCalculator(chefs, Ingredients);
	return 0; 
} 

void Details()
{
	cout<<"Enter The Number of chefs: ";
	cin>>chefs;
	cout<<endl;
	cout<<"Enter The Number of Ingredient needed by Each chef to make there dishes: ";
	cin>>Ingredients;
	cout<<endl;	
	checkDetails(chefs,Ingredients);	
}

void checkDetails(int x,int y)
{
if(x<=0 || y<=0)
    {
    	cout<<"Invalid Entry";
    	cout<<"Enter the valid Entry"; 
    	cout<<endl;
    	Details();	
	}
}
int IngredientCalculator(int process, int need) 
{ 
	int Recquired_Ing = 0; 
	Recquired_Ing = process*(need - 1)+1; 
	return Recquired_Ing; 
}
