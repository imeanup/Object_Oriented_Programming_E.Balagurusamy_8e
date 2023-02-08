int main(){
    int a = 2;
    float b = 2.5;
    int show(a); 
    float show(b); 
    return 0;
}

/* 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Error message:
error: redefinition of 'show' with a different type: 'float' vs 'int'
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    show is used to declare two different functions, 
    one with an int parameter and another with a float parameter. 

    >> Solution:
    either use different function names for each declaration or 
    use function overloading to have multiple definitions of the same function 
    with different parameters.
*/