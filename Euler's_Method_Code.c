/***********************************************
****EULER METHOD FOR DIFFERENTIAL EQUATIONS*****
***********************************************/
/*  Adapted From:
    shorturl.at/CNP79   */

// Note: if there is a "// /*" or "// */", you can delete the // from "// /*" to comment out whole section (used for actual solution)

#include<stdio.h>
#include<math.h>

// Define e for actual equation
#define E 2.71828182845904523536

// Put equation below for Euler Method
double f(double x, double y){
    // Put Equation in Return Statement
    return pow(x,2) + (6 * pow(y,2)) - 3;  
}

// Put in equation to get actual value
// /*
double actual_f(double x, double y){
    //Put Equation in Return Statement
    return 9 + (4 * x) - pow(E,x);
}
// */


main(){
    // Define Variables
    int i;
    double y,xi,yi,xf,h, actual;
    
    //Get User Input
    printf("Enter the initial condition for y: ");
    scanf("%lf",&yi);
    printf("Enter the initial condition for x: ");
    scanf("%lf",&xi);
    printf("Enter the value of x for which y is required: ");
    scanf("%lf",&xf);
    printf("Enter the step-width h: ");
    scanf("%lf",&h);
    
    // Print Starting Values
    printf("x\t\ty\t\ty'\t\thy'\t\ty+hy'\n");
    printf("__________________________________________________________________________\n");
    
    //Begin Euler Routine Calculate / Print Loop
    while(xi<xf){
        y=yi+h*f(xi,yi);
        // Comment line below if using REALLY small steps, to save time and resources
        printf("%lf\t%lf\t%lf\t%lf\t%lf\n",xi,yi,f(xi,yi),h*f(xi,yi),y);
        yi=y;
        xi=xi+h;
    }
    
    // Print Final Output
    printf("%lf\t%lf\n",xi,yi);
    printf("__________________________________________________________________________\n");
    
    // Print Final Value of Y
    printf("The value of y is %lf\n",y);
//} //Uncomment this bracket if you are not using actual value
    
    // Prints Actual Value
    // /*
    actual = actual_f(xf,yi);
    printf("The actual of y is %lf\n\n",actual);
} // */
