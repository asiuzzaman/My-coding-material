#include <bits/stdc++.h>
using namespace std;
#define read() freopen("/home/asiuzzaman/Documents/input.txt", "r", stdin);
#define write() freopen("/home/asiuzzaman/Documents/output.txt", "w", stdout);

double Ratio(double ab,double ac,double bc,double ad)
{
	double ae=(ad*ac)/ab;
	double de=(ad*bc)/ab;

	double s1,s2;
	s1=(ad+de+ae)/2.0;
	s2=(ab+bc+ac)/2.0;
	double SmallTraingle=sqrt(s1 * (s1-ad) * (s1-de) * (s1-ae));
	double LargeTraingle=sqrt(s2 * (s2-ab) * (s2-bc) * (s2-ac));
	double trapozoidal=LargeTraingle-SmallTraingle;

	//cout<<"the output:"<<LargeTraingle<<endl;
	return SmallTraingle/trapozoidal;

}

double BinarySearch(double ab,double ac, double bc , double ratio)
{
	double hi,lo, mid,ad;
	hi=ab;
	lo=0.0;
   for(int i=0;i<100;i++)
   {
   	mid=(hi+lo)/2.0;
   	ad=mid;
   	if(Ratio(ab,ac,bc,ad)>ratio)
   		hi=mid;
   	else 
   		lo=mid;
   }
   return ad;
}

int main()
{

	#ifdef asiuzzaman
	read(); write();
	#endif //asiuzzaman
  
    int t;
    double ab,ac,bc,ratio;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         cin>>ab>>ac>>bc>>ratio;
         double ans=BinarySearch(ab,ac,bc,ratio);
         printf("Case %d: %.16lf\n",i,ans );
    }
	
}