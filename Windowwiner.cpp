#include <iostream>
#include <windows.h>
using namespace std;
void psq(int c,float i,char p=0){//draw pixel i block,color code c
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,c); 
	for(int j=0;j <i*2 ;j++)
	{
		if(p!=0)cout <<p;
		else cout<<" ";
	}
	SetConsoleTextAttribute(hConsole,15); 
}
void SetWindow(int Width, int Height)//don,t care//set window size
    {
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Width-1;
    Rect.Right = Height-1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
    }

int main(){
	SetWindow(250,300);
  	psq(1,125);
	//1
	psq(1,63/2);
  	psq(120,3);
  	psq(1,18);
	psq(236,20);	
	psq(1,18);
	psq(120,3);
	psq(1,63/2); 
	//2
	psq(1,57/2+1);
	psq(120,3);
	psq(254,3);
	psq(120,1);
	psq(1,17);
	psq(236,20);
	psq(1,17);
	psq(120,1);	
	psq(254,3);
	psq(120,3);
	psq(1,57/2);
	//3
	psq(1,21/2+1);
	psq(120,2);
	psq(1,12);
	psq(120,4);
	psq(254,6);
	psq(120,1);
	psq(1,12);
	psq(236,30);
	psq(1,12);
	psq(120,1);	
	psq(254,6);
	psq(120,4);
	psq(1,12);
	psq(120,2);
	psq(1,21/2);
	//4
	psq(1,21/2+1);
	psq(120,14);
	psq(254,11);
	psq(120,1);
	psq(1,11);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,11);
	psq(120,1);	
	psq(254,11);
	psq(120,14);
	psq(1,21/2);
	//5
	psq(1,23/2+1);
	psq(120,2);
	psq(254,22);
	psq(120,1);
	psq(1,11);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,11);
	psq(120,1);
	psq(254,22);
	psq(120,2);
	psq(1,23/2+1);
	//6
	psq(1,23/2+1);
	psq(120,3);
	psq(254,21);
	psq(120,1);
	psq(1,10);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,10);
	psq(120,1);
	psq(254,21);
	psq(120,3);
	psq(1,23/2+1);
	//7
	psq(1,29/2+1);
	psq(120,3);
	psq(254,20);
	psq(120,1);
	psq(1,9);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,9);
	psq(120,1);	
	psq(254,20);
	psq(120,3);
	psq(1,29/2+1);
	//8
	psq(1,31/2+1);
	psq(120,3);
	psq(254,5);
	psq(120,4);
	psq(254,10);
	psq(120,1);
	psq(1,8);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,8);
	psq(120,1);
	psq(254,10);
	psq(120,4);	
	psq(254,5);
	psq(120,3);
	psq(1,31/2+1);
	//9
	psq(1,37/2+1);
	psq(120,9);	
	psq(254,12);
	psq(120,1);
	psq(1,7);
	psq(236,1);
	psq(1,4);
	psq(236,20);//1
	psq(1,4);
	psq(236,1);
	psq(1,7);
	psq(120,1);
	psq(254,12);
	psq(120,9);	
	psq(1,37/2+1);
	//10
	psq(1,37/2+1);
	psq(120,4);
	psq(254,3);
	psq(120,2);
	psq(254,3);
	psq(120,2);
	psq(254,2);
	psq(120,1);
	psq(254,4);
	psq(120,1);
	psq(1,6.5);
	psq(236,1.5);
	psq(1,3);
	psq(236,20);//1
	psq(1,3);
	psq(236,1.5);
	psq(1,6.5);
	psq(120,1);
	psq(254,4);
	psq(120,1);
	psq(254,2);
	psq(120,2);
	psq(254,3);
	psq(120,2);
	psq(254,3);
	psq(120,4);
	psq(1,37/2+1);
	//11
	psq(1,35/2+1);
	psq(120,3);
	psq(254,8);
	psq(120,4);
	psq(254,4);
	psq(120,2);
	psq(254,3);
	psq(120,2);
	psq(1,5.5);
	psq(236,1.5);
	psq(1,2);
	psq(236,20);//1
	psq(1,2);
	psq(236,1.5);
	psq(1,5.5);
	psq(120,2);
	psq(254,3);
	psq(120,2);
	psq(254,4);
	psq(120,4);
	psq(254,8);
	psq(120,3);
	psq(1,41/2+1);
	//12
	psq(1,23/2+1);
	psq(120,3);
	psq(254,11);
	psq(120,2);
	psq(254,3);
	psq(120,1);
	psq(254,2);
	psq(120,2);
	psq(254,4);
	psq(120,2);
	psq(1,4.5);
	psq(236,1.5);
	psq(1,1);
	psq(236,20);//1
	psq(1,1);
	psq(236,1.5);
	psq(1,4.5);
	psq(120,2);
	psq(254,4);
	psq(120,2);
	psq(254,2);
	psq(120,1);
	psq(254,3);
	psq(120,2);
	psq(254,11);
	psq(120,3);
	psq(1,23/2);
	//13
	psq(1,37/2+1);
	psq(120,2);
	psq(254,11);
	psq(120,2);
	psq(254,1);
	psq(120,1);
	psq(254,3);
	psq(120,1);
	psq(254,9);
	psq(120,3);
	psq(1,3.5);
	psq(236,1.5);
	psq(236,20);//1
	psq(236,1.5);
	psq(1,3.5);
	psq(120,3);
	psq(254,9);
	psq(120,1);
	psq(254,3);
	psq(120,1);
	psq(254,1);
	psq(120,2);
	psq(254,11);
	psq(120,2);
	psq(1,37/2);
	//14
	psq(1,21/2);
	psq(120,2);
	psq(254,10);
	psq(120,3);
	psq(254,2);
	psq(120,1);
	psq(254,2);
	psq(120,1);
	psq(254,12);
	psq(120,3);
	psq(1,3);
	psq(236,20);//1
	psq(1,3);
	psq(120,3);
	psq(254,12);
	psq(120,1);
	psq(254,2);
	psq(120,1);
	psq(254,2);
	psq(120,3);
	psq(254,10);
	psq(120,2);
	psq(1,21/2);
	//15
	psq(1,33/2);
	psq(120,5);
	psq(254,4);
	psq(120,5);
	psq(254,4);
	psq(120,3);
	psq(254,3);
	psq(120,15);
	psq(1,2);
	psq(236,18);//1
	psq(1,2);
	psq(120,15);
	psq(254,3);
	psq(120,3);
	psq(254,4);
	psq(120,5);
	psq(254,4);
	psq(120,5);
	psq(1,33/2);
	//16
	psq(1,27/2);
	psq(120,8);
	psq(254,6);
	psq(120,3);
	psq(254,3);
	psq(120,2);
	psq(254,8);
	psq(120,6);
	psq(1,2);
	psq(236,16);//1
	psq(1,2);
	psq(120,6);
	psq(254,8);
	psq(120,2);
	psq(254,3);
	psq(120,3);
	psq(254,6);
	psq(120,8);
	psq(1,27/2);
	//17
	psq(1,53/2);
	psq(120,2);
	psq(254,6);
	psq(120,3);
	psq(254,2);
	psq(120,2);
	psq(254,7);
	psq(120,8);
	psq(1,3);
	psq(236,14);//1
	psq(1,3);
	psq(120,8);
	psq(254,7);
	psq(120,2);
	psq(254,2);
	psq(120,3);
	psq(254,6);
	psq(120,2);
	psq(1,53/2);
	//18
	psq(1,37/2);
	psq(120,2);
	psq(254,6);
	psq(120,3);
	psq(254,3);
	psq(120,1);
	psq(254,8);
	psq(120,4);
	psq(1,8);
	psq(236,12);//1
	psq(1,8);
	psq(120,4);
	psq(254,8);
	psq(120,1);
	psq(254,3);
	psq(120,3);
	psq(254,6);
	psq(120,2);
	psq(1,37/2);
	//19
	psq(1,51/2);
	psq(120,1);
	psq(254,5);
	psq(120,4);
	psq(254,3);
	psq(120,2);
	psq(254,7);
	psq(120,4);
	psq(1,12);
	psq(236,6);//1
	psq(1,12);
	psq(120,4);
	psq(254,7);
	psq(120,2);
	psq(254,3);
	psq(120,4);
	psq(254,5);
	psq(120,1);
	psq(1,51/2);
	//20
	psq(1,35/2);
	psq(120,2);
	psq(254,3);
	psq(120,3);
	psq(1,2);
	psq(120,1);
	psq(254,1);
	psq(120,4);
	psq(254,5);
	psq(120,4);
	psq(1,14);
	psq(236,6);//1
	psq(1,14);
	psq(120,4);
	psq(254,5);
	psq(120,4);
	psq(254,1);
	psq(120,1);
	psq(1,2);
	psq(120,3);
	psq(254,3);
	psq(120,2);
	psq(1,35/2);
	//21
	psq(1,49/2);
	psq(120,7);
	psq(1,3);
	psq(120,4);
	psq(1,1);
	psq(120,1);
	psq(254,3);
	psq(120,3);
	psq(1,17);
	psq(236,6);//1
	psq(1,17);
	psq(120,3);
	psq(254,3);
	psq(120,1);
	psq(1,1);
	psq(120,4);
	psq(1,3);
	psq(120,7);
	psq(1,49/2);
	//22
	psq(1,35/2);
	psq(120,3);
	psq(1,7);
	psq(120,1);
	psq(1,4);
	psq(120,1);
	psq(254,1);
	psq(120,3);
	psq(1,19);
	psq(236,6);//1
	psq(1,19);
	psq(120,3);
	psq(254,1);
	psq(120,1);
	psq(1,4);
	psq(120,1);
	psq(1,7);
	psq(120,3);
	psq(1,35/2);
	//23
	psq(1,79/2);
	psq(120,3);
	psq(1,21);
	psq(236,6);//1
	psq(1,21);
	psq(120,3);
	psq(1,79/2);
	//24
	psq(1,113/2);
	psq(236,6);//1
	cout<<endl;
	//25
	psq(1,119/2);
	psq(236,6);//1
	cout<<endl;
	psq(1,119/2);
	psq(236,6);//1
	cout<<endl;
	psq(1,113/2);
	psq(236,12);//1
	cout<<endl;
	psq(1,109/2);
	psq(236,16);//1
	cout<<endl;
	psq(1,105/2);
	psq(236,20);//1
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	
	int N=46,c=207;
for(int i=0;i<3;i++){
c=162;
	psq(1,N);
	psq(c,2);
	psq(1,6);
	psq(c,2);
	psq(1,2);
	psq(c,6);
	psq(1,2);
	psq(c,2);
	psq(1,6);
	psq(c,2);
	cout<<endl;}
for(int i=0;i<3;i++){
	c=225;
	psq(1,N);
	psq(c,2);
	psq(1,6);
	psq(c,2);
	psq(1,4);
	psq(c,2);
	psq(1,4);
	psq(c,4);
	psq(1,4);
	psq(c,2);
	cout<<endl;}
for(int i=0;i<3;i++){
	c=207;
	psq(1,N);
	psq(c,2);
	psq(1,2);
	psq(c,2);
	psq(1,2);
	psq(c,2);
	psq(1,4);
	psq(c,2);
	psq(1,4);
	psq(c,2);
	psq(1,2);
	psq(c,2);
	psq(1,2);
	psq(c,2);
	cout<<endl;

}
for(int i=0;i<3;i++){
	c=144;
	psq(1,N);
	psq(c,4);
	psq(1,2);
	psq(c,4);
	psq(1,4);
	psq(c,2);
	psq(1,4);
	psq(c,2);
	psq(1,4);
	psq(c,4);
	cout<<endl;
	
	
}
for(int i=0;i<3;i++){
c=252;
	psq(1,N);
	psq(c,2);
	psq(1,6);
	psq(c,2);
	psq(1,2);
	psq(c,6);
	psq(1,2);
	psq(c,2);
	psq(1,6);
	psq(c,2);
	cout<<endl;}


}

