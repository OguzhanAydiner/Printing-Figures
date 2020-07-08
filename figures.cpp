#include<stdio.h>
#include<math.h>
#define pi 3.1416
	struct figy{
	int figure;
};

void draw_X(int ar[20][20]){
	double angle;int a;
	printf("Enter angle:"); scanf("%lf",&angle);
	printf("Enter a:"); scanf("%d",&a);
	
	int i,j,temp;
	
	float x,y;
	double radyan;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			ar[i][j]=' ';
		}
	}
	radyan=(angle/180)*pi;
	x=(a*cos(radyan/2));
	x=round(x);
	
	
	for(i=0;i<=x;i++){
		y=tan(radyan/2)*i;
		y=round(y);
		y=10-y;
		temp=i;
		i=i+10;
		ar[(int)y][i]='*';
		i=temp;	
	}
	for(i=-x;i<=0;i++){
		y=-tan(radyan/2)*i;
		y=round(y);
		y=10-y;
		temp=i;
		i=i+10;
		ar[(int)y][i]='*';
		i=temp;
	
	}
	for(i=-x;i<=0;i++){
		y=-tan(radyan/2)*i;
		y=round(y);
		y=10+y;
		temp=i;
		i=i+10;
		ar[(int)y][i]='*';
		i=temp;	
	}
	
	for(i=0;i<=x;i++){
		y=tan(radyan/2)*i;
		y=round(y);
		y=10+y;
		temp=i;
		i=i+10;
		ar[(int)y][i]='*';
		i=temp;		
	}
	
}

void FillIsoscelesTriangle(int triang[20][20])//-------------------------------------------------------------------------------------triangle
{
	int i,j,k,n;
	int a;
	printf("Triangle-Enter a:"); scanf("%d",&a);

	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			triang[i][j]=' ';
		}
	}

	n=0; k=0;
	
	for(i=9-a/2;i<=9;i++)
	{
		for(j=9-a/3;j<=9+a/3;j++)
		{
			if(j>=9+a/3-n)
			{
				triang[j][i]='*';
			}
		} 
		n++; 
	} 
	
	for(i=9+a/2;i>=9;i--)
	{
		for(j=9-a/3;j<=9+a/3;j++)
		{
			if(j>=9+a/3-k )
			{
				triang[j][i]='*';
			}
		} 
		k++; 
	} 
		
	
	
}


void FillPlusSign(int array[20][20]){//------------------------------------------------------------------------------------------------------plus
	int i,j;
	int lx; int ly;
	printf("Plus-Enter lx:"); scanf("%d",&lx);
	printf("Plus-Enter ly:"); scanf("%d",&ly);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
		
	for(i=(9-(ly/2));i<(9+(ly/2));i++)
	{
		
		for(j=(9-(lx/2));j<=(9+(lx/2));j++)
		{
			if(i==10) {
					    array[i][j]='*';
			}

			}
			}
			
			
	for(i=(9-(ly/2))+1;i<(9+(ly/2))+1;i++)
	{
		
		for(j=(9-(lx/2))+1;j<(9+(lx/2))+1;j++)
		{
				if(j==9){
			for(i=9-(ly/2)+1; i<=(9+(ly/2))+1;i++) {
				array[i][j]='*';
		}
	}
}
}}


void FillEllipse(int array[20][20]){//--------------------------------------------------------------------------------------------------ellipse
int i,j;
int b;int a;

printf("Ellipse-Enter a:"); scanf("%d",&a);
printf("Ellipse-Enter b:"); scanf("%d",&b);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
	
for(i=9-a;i<=9+a;i++)
    {
        for(j=9-b;j<=9+b;j++)
        {
            if(pow(i-9,2)*pow(b,2)+pow(j-9,2)*pow(a,2)<=pow(a,2)*pow(b,2))
                array[i][j]='*';
            else
                array[i][j]=' ';
                 
        }
       
    }
}



void FillTSign(int array[20][20]){//---------------------------------------------------------------------------------------------------- T sign
	int i,j;
	int lx; int ly;
	printf("T-Enter lx:"); scanf("%d",&lx);
	printf("T-Enter ly:"); scanf("%d",&ly);
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
		
	for(i=(9-(ly/2))+1;i<(9+(ly/2))+1;i++)
	{
		
		for(j=(9-(lx/2))+1;j<(9+(lx/2))+1;j++)        //sütun
		{
			if(j==10)
			{
				for(i=9-(ly/2)+1; i<(9+(ly/2))+1;i++)
				{	
					array[i][j]='*';
				}
			}
		} 
			
		
		
		for(i=(9-(ly/2))+1;i<(9+(ly/2))+1;i++)
		{
			for(j=(9-(lx/2))+1;j<(9+(lx/2))+1;j++)          //satýr
			{
				if(i==9-(ly/2)+1)
				{
					array[i][j]='*';
				}
			}
		} 

	}
}



void FillRectFrame(int array[20][20])//------------------------------------------------------------------------------------------------ Rect frame
{
	int i,j,max=0;
	int h; int w; int t;
	printf("Frame-Enter h:"); scanf("%d",&h);
	printf("Frame-Enter w:"); scanf("%d",&w);
    printf("Frame-Enter t:"); scanf("%d",&t);

	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
	
	
	for(i=(9-(h/2))+1;i<(9+(h/2+h%2))+1;i++)
	{
		for(j=(9-(w/2))+1;j<(9+(w/2+w%2))+1;j++)
		{
			array[i][j]='*';
		}
	}
	
	
	for(i=((9-(h/2))+1)+t;i<((9+(h/2+h%2))+1)-t;i++)
	{
		for(j=((9-(w/2))+1)+t;j<((9+(w/2+w%2))+1)-t;j++)
		{
			array[i][j]=' ';
		}
	}	
} 



void FillH(int array[20][20])//--------------------------------------------------------------------------------------------------------------------- H sign
{
	int i,j,max=0;
	
	int h; int w;
	printf("H-Enter h:"); scanf("%d",&h);
	printf("H-Enter w:"); scanf("%d",&w);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
	
	
	for(i=(9-(h/2))+1;i<(9+(h/2+h%2))+1;i++)
	{
		for(j=(9-(w/2))+1;j<(9+(w/2+w%2))+1;j++)
		{
			if(i==10)
			{
				array[i][j]='*';
			}
			else if (j==(9-w/2)+1||j==(9+(w/2)+w%2))
			{
				array[i][j]='*';
			}
		}
	}
	

}


void FillCircle(int array[20][20])//------------------------------------------------------------------------------------------- circle
{
int ri;
	int ro;
	printf("Ring-Circle Enter ri:"); scanf("%d",&ri);
	printf("Ring-Circle Enter ro:"); scanf("%d",&ro);
	int i,j,k;
	int y,z,q;
	
	double distance;
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}

for(i=9-ro;i<ro+9;i++)
    {
        for(j=-ro+9;j<ro+9;j++)
        {
            if((i-9)*(i-9)+(j-9)*(j-9)<ro*ro)
                array[i][j]='*';
            
                 
        }
        
    }
    for(i=9-ri;i<ri+9;i++)
    {
        for(j=-ri+9;j<ri+9;j++)
        {
            if((i-9)*(i-9)+(j-9)*(j-9)<ri*ri)
                array[i][j]=' ';
            
                 
        }
        
    }
	}



void FillRectangle(int array[20][20]){ //-------------------------------------------------------------------------------------------- Rectangle
int h,w;
printf("Rectangle Enter h:"); scanf("%d",&h);
printf("Rectangle Enter w:"); scanf("%d",&w);

    int i,j,max=0;

	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}

	

	int a,b;
	
	for(a=0;a<1;a++){
		for(b=0;b<2;b++){
			if(b==0){
					for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
		for(i=(9-(h/2))+1;i<(9+(h/2))+1;i++)
	{
		for(j=(9-(w/2))+1;j<(9+(w/2))+1;j++)
		{
			array[i][j]='*';
		}
		
	}	
			}
			else{
				for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			array[i][j]=' ';
		}
	}
		for(i=(9-(h/2))+1;i<(9+(h/2))+1;i++)
	{
		for(j=(9-(w/2))+1;j<(9+(w/2))+1;j++)
		{
			array[i][j]='*';
		}
		
	}
				
			}
		}
	}

}




int main(){



	int i,j;
 int y;
 int x;
int plus[20][20];
int ellipse[20][20];
int triangle[20][20];
int rectframe[20][20];
int tsign[20][20];
int hsign[20][20];
int circle[20][20];
int rectangle[20][20];
int xsign[20][20];
int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
int n;
int m;
int t=0;
int l;
int z;

	printf("How many figure do you want to draw?\n"); scanf("%d",&y);
	printf("How many line do you want to draw?\n"); scanf("%d",&x);
	printf("How many  vertical copy do you want to draw?\n"); scanf("%d",&n);
	printf("How many horizontal copy do you want to draw?\n"); scanf("%d",&z);
	printf("Choose Figure to draw:\n1:Plus Sign\n2:Ellipse\n3:Triangle\n4:Rect Frame\n5:T Sign\n6:H Sign\n7:Ring\n8:Rectangle\n9:X Sign\n");
	struct figy  figurey[x][n*y];
	
		for(j=0;j<x;j++) {
		printf("\nChoose for line %d:\n",j+1);
		for(i=0;i<y;i++)
		{
			printf("Choose %d. figure:\n",i+1);
			scanf("%d",&figurey[j][i].figure);
}
}

for(i=0;i<x;i++){
	
	for(j=0;j<n*y;j++){
		figurey[i][j].figure=figurey[i][j%y].figure;
	}
	   
}


printf("Pattern matrice:\n");
for(m=0;m<z;m++){
	

for(i=0;i<x;i++){

for(j=0;j<n*y;j++){
	printf("%d ",figurey[i][j].figure);
}
printf("\n");
}
}


x=20*x;
y=20*n*y;
int all[x][y];


int f=0;

		for(i=0;i<x;i++){
		f=i/20;		
    
	
		 	for(j=0;j<y;j++){

	     		t=j/20;
	     		if(figurey[i/20][j/20].figure==1){
	     			if(s1==0){
	     				FillPlusSign(plus);
	     				s1++;
					 }
	     			 if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=plus[i-20*f][j-20*t];
					 }
				 }
				 
				 
				 else if(figurey[i/20][j/20].figure==2){
				 	if(s2==0 ){
	     				FillEllipse(ellipse);
	     				s2++;
					 }
				 	 if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=ellipse[i-20*f][j-20*t];
					 }
				 	
				 }
				 else if(figurey[i/20][j/20].figure==3){
				 	if(s3==0){
	     				FillIsoscelesTriangle(triangle);
	     				s3++;
					 }
				 	 if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=triangle[i-20*f][j-20*t];
					 }
				 }
				  else if(figurey[i/20][j/20].figure==4){
				  	if(s4==0){
	     				FillRectFrame(rectframe);
	     				s4++;
					 }
				  	   if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=rectframe[i-20*f][j-20*t];
					 }
				 }
				  else if(figurey[i/20][j/20].figure==5){
				  	if(s5==0){
	     				FillTSign(tsign);
	     				s5++;
					 }
				  	  if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=tsign[i-20*f][j-20*t];
					 }
				 	
				 }
				  else if(figurey[i/20][j/20].figure==6){
				  	if(s6==0){
	     				FillH(hsign);
	     				s6++;
					 }
				  	   if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=hsign[i-20*f][j-20*t];
					 }
				
				 	
				 }
				  else if(figurey[i/20][j/20].figure==7){
				  	if(s7==0){
	     			s7++;
					 	FillCircle(circle);	
					 }
				      if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=circle[i-20*f][j-20*t];
					 }
				 	
				 }
				 else if(figurey[i/20][j/20].figure==8){
				 	if(s8==0){
	     				FillRectangle(rectangle);
	     				s8++;
					 }
				 	 if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=rectangle[i-20*f][j-20*t];
					 }
				 	
				 }
				  else if(figurey[i/20][j/20].figure==9){
				  	if(s9==0){
	     				draw_X(xsign);
	     				s9++;
					 }
				  	   if(j>=20*t &&j<20*(t+1)){
				 		all[i][j]=xsign[i-20*f][j-20*t];
					 }
				 }
				
	
		
		}	
	}


	
	int a;
	int v;	

	for(v=0;v<z;v++){
	

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%c",all[i][j]);
		}
		printf("\n");
	}
	

}
	
	FILE*hedef_dosya;
hedef_dosya=fopen("projeeeeee.pgm","w");	
for(v=0;v<z;v++){
	

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			fprintf(hedef_dosya,"%c",all[i][j]);
		}
		fprintf(hedef_dosya,"\n");
	}
	

}
printf("patterns succesfully saved to text file.");
fclose(hedef_dosya); 

	

}
