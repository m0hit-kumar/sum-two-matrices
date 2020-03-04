#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
	cout<<"Enter matrix 1 elements :";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter matrix 2 elements :";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"Adding the two matrix to form the third matrix .....\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	cout<<"The two matrix added successfully...!!";
	cout<<"The new matrix will be :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
}
