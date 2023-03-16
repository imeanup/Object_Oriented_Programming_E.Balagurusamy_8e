// #include <iostream>
// using namespace std;
// double fact(int n)
// {
// 	if(n==1)
// 		return 1.0;
// 	else
// 		return n*fact(n-1);
// }
// int main()
// {
// 	double e=1.0;
// 	int n,i;
// 	//clrscr(); //changed
// 	cout<<"Enter Limit of Series..."<<endl;
// 	cin>>n;
// 	for(i=1;i<=n;i++)
// 	{
// 		e=e+(1.0/fact(i));
// 	}
// 	cout.precision(4);//For Accuracy acc=0.0001
// 	cout<<"e = "<<e;
// 	//getch();
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double e = 1.0, term = 1.0;
    int i = 1;
    double acc = 0.0001;
    while (term > acc)
    {
        term /= i;
        e += term;
        i++;
    }
    cout << "The value of e is " << e << endl;
    return 0;
}