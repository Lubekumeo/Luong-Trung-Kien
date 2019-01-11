#include<iostream>
#include<math.h>
using namespace std;

int main()
{	
	double TV, LS, TKV, nam;
	double x, y;
	
	cout<<"nhap vao so tien von, lai suat, tien ki vong: "; cin>>TV>>LS>>TKV;
	
	if(TKV>TV)
	{
	LS=double(LS/100);
	x=double(TKV/TV);
	y=double(1+LS);
	nam=double(log(x)/log(y));
	cout<<"vay ban can "<<nam<<" nam de dat duoc so tien ki vong la: "<<TKV;
	}
	else
	cout<<"ban da nhap du lieu khong hop le.";
    
	return 0;

}
