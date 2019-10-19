#include <iostream>
#include <vector>
using namespace std;

int main(){
	//array[y][x]
	int array[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
	};

	int x, y;
	for (int i=0;i<8;i++){
		cin >> x >> y;
		x--; y--;
		array[x][y]=1;
	}

	//Horizontal & Vertical check
	for (int i=0; i<8; i++){
		int the_sum=0;//Hor. sum
		int vert_sum=0;
		for (int z=0;z<8;z++){
			the_sum +=array[i][z];
			vert_sum += array[z][i];
			//cout <<array[i][z]<<"|";	//DEBUG
		}
		//cout<<endl;
		if (the_sum>1){cout<<"YES"<<endl;return 0;}
		if (vert_sum>1){cout<<"YES"<<endl;return 0;}
	}

	//Diagonal check
	for (int i=0;i<8;i++){
		int the_sum=0;
		the_sum = 0;
		for (int j=0;j<8;j++){
			int x,y;
			x = j;
			y = j+i;
			if (y>=8){break;}
			the_sum += array[y][x];

		}
		if (the_sum>1){cout<<"YES"<<endl;return 0;}
	}

	//Another Diagonal check
	for (int i=1;i<8;i++){
		int the_sum=0;
		the_sum = 0;
		for (int j=0;j<8;j++){
			int x,y;
			x = j;
			y = -(j-i);//magic
			if (y<0){break;}
			the_sum += array[y][x];
		}
		if (the_sum>1){cout<<"YES"<<endl;return 0;}
	}
	cout << "NO"<<endl;
    return 0;
}
