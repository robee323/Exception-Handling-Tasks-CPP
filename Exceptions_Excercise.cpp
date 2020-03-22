/*
Exception handling -  Robert Lotawiec
*/

#include<iostream>
#include<cmath>
#include<exception>
class Logarithm
{
public:
	double base;
	double exponent;
	double *compute_logarithm(double base, double exponent);
	void calculate_and_display_score(double base, double exponent);

};
// function to evaluate logarithm a base-b
uint32_t log(uint32_t a, uint32_t b)
{
	return log2(a) / log2(b);
}
double* Logarithm::compute_logarithm(double base, double exponent)
{
	/*
	1.Logarithm exists only if three conditions are met, which are often called assumptions or logarithm domain:
	- the base of logarithms must always be a positive number, i.e. a> 0,
	-base is different from 1, therefore: a ≠ 1,
	- logarithmic number must be positive, i.e. b> 0

	2.Write the appropriate instructions to check if the given conditions are met, if not throw the appropriate type of exception (object).

	3. Consider also the logarithm case when both parameters have the same value, in this case throw the exception value 1.

	4. In addition, when one of the parameters of the logarithm will be the square of the value of the other one,
	in this case throw as an exception a variable of type char 's' denoting square.
	5.Throwing Exceptions After Destroying Objects in order to avoid memory leaks
	*/
	
	
	
	/*calculate the logarithm for the given parameters and return the calculation result*/

	
}

void Logarithm::calculate_and_display_score(double base, double exponent)
{
	/*
	1.Write the body of the function that handles all possible exceptions to the compute_logarithm function.
	2.Use the try and catch keywords.
	3.Handle exceptions for type int, domain_error and for one of the logic_error - you have to precise what logic_error do you mean,
	and perform default support for the remaining options.
	*/



/*
Define a class called Exception that inherits from the std::runtime_error class, 
define constructor of class Exception that passes a string message to the runtime_error class : "Math error: Attempted to divide by Zero\n"
*/




//  Division function 
float Division(float num, float den)
{

	// If denominator is Zero throw user defined exception of type Exception 
	

	// otherwise return the result of division 

}
int main()
{
	/*
	1. Write in the main function to catch exceptions from the object of the logic_error class
	from the else statement in the function calculate_and_display_score.
	2. Create the object of the Exception class and and handle possible exeptions
	*/


	float numerator, denominator, result;

	// write try block calls the Division function 
	
	
	
	
	

	// write catch block for the Division function that catches exception if any of type Exception occurs
	catch () 
	{
		// prints that exception has occurred; calls the what method using object of the user defined class called Exception 
	
	}
	
	
	
	/* write try and catch block for the Logarithm function	(create an object and call void calculate_and_display_score(double base, double exponent) ) 
	that catches any exception - take into account all posibilities (deafult case also), use what() when neccessary
	*/
	return 0;
}