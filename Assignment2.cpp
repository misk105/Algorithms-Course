#include <iostream>
#include<chrono>
using namespace std;
using namespace chrono;
long long fact1(long long n)
{
 long long sum=1;
 for(int i=2;i<=n;i++)
 sum*=i;
 return sum;
}
long long fact2(long long n)
{
 if(n==1)return 1;
 return n*fact2(n-1);
}
int main()
{
 int number;
 cout<<"Enter The Number To Calculate The Factorial :\n";
 cin>>number;
 auto start1 = high_resolution_clock::now();
 cout<<"The Result In The Iterative Function : "<<fact1(number)<<endl;
 cout<<"The Result In The Recursive Function : "<<fact2(number)<<endl;
 auto stop1 = high_resolution_clock::now();
 auto duration = duration_cast<microseconds>(stop1 - start1);
 cerr << "Time taken in microseconds : "<< (double)(duration.count() / 1000.0) << endl;
 return 0;
}