#include <REGX51.H>
char code hieuUngsangXuoi[] = {0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F,0xFF};
char code hieuUngsangXuoi2[] = {0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE,0xFF};
char code hieuUngBlink1[] = {0xff,0x00,0xff,0x00,0xff,0x00};
char code hieuUngBlink2_1[] = {0xAA,0x55};
char code hieuUngBlink2_2[] = {0x55,0xAA};
char code hieuUng1_1[] = {0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x00};
char code hieuUng1_2[] = {0xFF,0xFE,0xFC,0xF8,0xF0,0xE0,0xC0,0x80,0x00};
char code donbit1_1[] = {0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};
char code donbit1_2[] = {0x7E,0xBE,0xDE,0xEE,0xF6,0xFA,0xFC};
char code donbit1_3[] = {0x7C,0xBC,0xDC,0xEC,0xF4,0xF8};
char code donbit1_4[] = {0x78,0xB8,0xD8,0xE8,0xF0};
char code donbit1_5[] = {0x70,0xB0,0xD0,0xE0};
char code donbit1_6[] = {0x60,0xA0,0xC0};
char code donbit1_7[] = {0x40,0x80};
char code donbit2_1[] = {0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
char code donbit2_2[] = {0x7E,0x7D,0x7B,0x77,0x6F,0x5F,0x3F};
char code donbit2_3[] = {0x3E,0x3D,0x3B,0x37,0x2F,0x1F};
char code donbit2_4[] = {0x1E,0x1D,0x1B,0x17,0x0F};
char code donbit2_5[] = {0x0E,0x0D,0x0B,0x07};
char code donbit2_6[] = {0x06,0x05,0x03};
char code donbit2_7[] = {0x02,0x01};
char code sangLtTP1[] = {0xFF,0xFE,0xFC,0xF8,0xF0,0xE0,0xC0,0x80,0x00};  // sangLTPT0
char code sangLtTP0[] = {0xFF,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x00};  // sangLTPT1
char code tatLtTP1[] = {0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF};
char code tatLtTP0[] = {0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF};
// pharse 2 
char code eff1[]={0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF,0xFE,0xFC,0xF8,0xF0,0xE0,0xC0,0x80}; // CHI DANH CHO P0
char code eff2[]={0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x01};// P1 P2 P3
char code eff3[]={0x3C,0x78,0xF0,0xE1,0xC3,0x87,0x0F,0x1E,0x3C};
char code eff4[]={0x3C,0x1E,0x0F,0x87,0xC3,0xE1,0xF0,0x78,0x3C};
// pharse 3
char code eff5_1[] = {0x7F,0x3F,0x1F,0x0F,0x87,0xC3,0xE1,0xF0,0xF8,0xFC,0xFE,0xFF};
char code eff5_2[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x0F};
char code eff5_3[] = {0x87,0xC3,0xE1,0xF0,0xF8,0xFC,0xFE,0xFF};

char code eff5_5[] = {0xFE,0xFC,0xF8,0xF0,0xE1,0xC3,0x87,0x0F,0x1F,0x3F,0x7F,0xFF};
char code eff5_6[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x0F};
char code eff5_7[] = {0x87,0xC3,0xE1,0xF0,0xF8,0xFC,0xFE,0xFF};	
char code eff5_8[] = {0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x0F};	
char code eff5_9[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xF0};
char code eff5_10[] = {0xE1,0xC3,0x87,0x0F,0x1F,0x3F,0x7F,0xFF};
char code eff5_11[] = {0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xF0};
char code eff5_12[] = {0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x0F};
char code eff5_13[] = {0x87,0xC3,0xE1,0xF0,0xF8,0xFC,0xFE,0xFF};

// pharse 4
char code chaybit1[]={0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};
char code chaybit2[]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
char code donbit11[]={0x7E,0xBE,0xDE,0xEE,0xF6,0xFA,0xFC};
char code donbit12[]={0x7C,0xBC,0xDC,0xEC,0xF4,0xF8};
char code donbit13[]={0x78,0xB8,0xD8,0xE8,0xF0};
char code donbit14[]={0x70,0xB0,0xD0,0xE0};
char code donbit15[]={0x60,0xA0,0xC0};
char code donbit16[]={0x40,0x80};
char code donbit21[]={0x7E,0x7D,0x7B,0x77,0x6F,0x5F,0x3F};
char code donbit22[]={0x3E,0x3D,0x3B,0x37,0x2F,0x1F};
char code donbit23[]={0x1E,0x1D,0x1B,0x17,0x0F};
char code donbit24[]={0x0E,0x0D,0x0B,0x07};
char code donbit25[]={0x06,0x05,0x03};
char code donbit26[]={0x02,0x01};
char code chayxenke1[]={0xfe,0xfd,0xfa,0xf5,0xea,0xd5,0xaa,0x55};
char code chayxenke2[]={0x7f,0xbf,0x5f,0xaf,0x57,0xab,0x55,0xaa};

void delay(int time){
	while(time--);
}
void sangXuoi1(int lan){
		int i, j;
		for (i=0;i<lan;i++){
			for (j = 0;j<8;j++){
				P0=hieuUngsangXuoi[j];
				P1=P2=P3=hieuUngsangXuoi2[j];
				delay(10000);
			}
		}			
}
void sangNguoc1 (int lan){
	int i, j;
		for (i=0;i<lan;i++){
			for (j = 0;j<8;j++){
				P0=hieuUngsangXuoi2[j];
				P1=P2=P3=hieuUngsangXuoi[j];
				delay(10000);
			}
		}				
}
void blink0(int lan){
	int i;
	for(i=0;i<lan;i++){
	P0 = P1 = P2 = P3 = 0;
	delay(10000);
	P0 = P1 = P2 = P3 =0xff;
	delay(10000);
	}
}
void sangXuoi4D(int lan){
	int i,j;
	for(i=0;i<lan;i++){
		for (j = 0;j<8;j++){
			P1= P2= P3= sangLtTP0[j];
			P0= sangLtTP1[j];
			delay(10000);
		}
	}
}
void sangNguoc4D(int lan){
	int i,j;
	for(i=0;i<lan;i++){
		for (j = 0;j<8;j++){
			P1= P2= P3= tatLtTP0[j];
			P0= tatLtTP1[j];
			delay(10000);
		}
	}
}
void blink1(int lan){
	int i,j;
	for (i=0;i< lan;i++){
		for (j=0;j<6;j++){
			P0=P3= hieuUngBlink1[j];
			P1=P2= 0xff;
			delay(10000);
		}
		for (j=0;j<6;j++){
			P1=P2= hieuUngBlink1[j];
			P0=P3= 0xff;
			delay(10000);
		}
	}
}
void blink2(int lan){
	int i,j;
	for (i=0;i< lan;i++){
		for (j=0;j<2;j++){
			P1 = P2 = P3 = hieuUngBlink2_1[j];
			P0 = hieuUngBlink2_2[j];
			delay(10000);
		}
	}
}	
			
void sangXuoi(int lan){
	int i, j,m,n,h;
	for(i=0;i<lan;i++){
		for (j =0; j<9;j++){
		P0 = hieuUngsangXuoi[j];
		delay(10000);
		}
		for (m =0; m<9;m++){
		P2 = hieuUngsangXuoi2[m];
		delay(10000);
		}
		for (n =0; n<9;n++){
		P3 = hieuUngsangXuoi2[n];
		delay(10000);
		}
		for (h =0; h<9;h++){
		P1 = hieuUngsangXuoi2[h];
		delay(10000);
		}
	}
}
void sangNguoc2(int lan){
	int i,j,m,n,h;
	for (i=0; i< lan; i++){
		for (j =0; j<9;j++){
			P1 = hieuUng1_2[j];
			delay(10000);
		}
		for (m =0; m<9;m++){
			P3 = hieuUng1_2[m];
			delay(10000);
		}
		for (n =0; n<9;n++){
			P2 = hieuUng1_2[n];
			delay(10000);
		}
			for (h =0; h<9;h++){
			P0 = hieuUng1_1[h];
			delay(10000);
		}
	}
}
void hieuUng4 (int lan){
	int i,j,m,n,k,z,x,c,v,b,a,s,d,f,g,h;
	for(i=0;i<lan;i++){
		for (j=0;j<9;j++){
			P0 = hieuUngsangXuoi[j];
			P3 = hieuUngsangXuoi2[j];
			delay(10000);
		}
		for (m=0;m<8;m++){
			P2 = donbit1_1[m];
			P1 = donbit1_1[m];
			delay(10000);
		}		
		for (n=0;n<9;n++){
			P0 = hieuUngsangXuoi[n];
			P3 = hieuUngsangXuoi2[n];
			delay(10000);
		}
		for (k=0;k<7;k++){
			P2 = donbit1_2[k];
			P1 = donbit1_2[k];
			delay(10000);
		}
		for (z=0;z<9;z++){
			P0 = hieuUngsangXuoi[z];
			P3 = hieuUngsangXuoi2[z];
			delay(10000);
		}
		for (x=0;x<6;x++){
			P2 = donbit1_3[x];
			P1 = donbit1_3[x];
			delay(10000);
		}
		for (c=0;c<9;c++){
			P0 = hieuUngsangXuoi[c];
			P3 = hieuUngsangXuoi2[c];
			delay(10000);
		}
		for (v=0;v<5;v++){
			P2 = donbit1_4[v];
			P1 = donbit1_4[v];
			delay(10000);
		}
		for (b=0;b<9;b++){
			P0 = hieuUngsangXuoi[b];
			P3 = hieuUngsangXuoi2[b];
			delay(10000);
		}
		for (a=0;a<4;a++){
			P2 = donbit1_5[a];
			P1 = donbit1_5[a];
			delay(10000);
		}
		for (s=0;s<9;s++){
			P0 = hieuUngsangXuoi[s];
			P3 = hieuUngsangXuoi2[s];
			delay(10000);
		}
		for (d=0;d<3;d++){
			P2 = donbit1_6[d];
			P1 = donbit1_6[d];
			delay(10000);
		}
		for (f=0;f<9;f++){
			P0 = hieuUngsangXuoi[f];
			P3 = hieuUngsangXuoi2[f];
			delay(10000);
		}
		for (g=0;g<2;g++){
			P2 = donbit1_7[g];
			P1 = donbit1_7[g];
			delay(10000);
		}
		for (h=0;h<9;h++){
			P0 = hieuUngsangXuoi[h];
			P3 = hieuUngsangXuoi2[h];
			delay(10000);
		}
		P2=P1=0x00;
		delay(10000);
	}
}
void hieuUng5 (int lan){
	int i,l,w,r,y,u,z,x;
	for (i = 0; i< lan; i++){
		P0=0x7F;
		for (l=0;l<8;l++){
			P0 = donbit2_1[l];
			P3 = donbit1_1[l];
			delay(10000);
			}
		for (w=0;w<7;w++){
			P0 = donbit2_2[w];
			P3 = donbit1_2[w];
			delay(10000);
			}
		for (r=0;r<6;r++){
			P0 = donbit2_3[r];
			P3 = donbit1_3[r];
			delay(10000);
			}
		for (y=0;y<5;y++){
			P0 = donbit2_4[y];
			P3 = donbit1_4[y];
			delay(10000);
			}
		for (u=0;u<4;u++){
			P0 = donbit2_5[u];
			P3 = donbit1_5[u];
			delay(10000);
			}
		for (z=0;z<3;z++){
			P0 = donbit2_6[z];
			P3 = donbit1_6[z];
			delay(10000);
			}
		for (x=0;x<2;x++){
			P0 = donbit2_7[x];
			P3 = donbit1_7[x];
			delay(10000);
			}
		P3=0x00;
		}
	}
void hieuUng6 (int lan){
	int i,j,m,n,z,x,c,v;
	for(i=0;i<lan;i++){
		for (j = 0;j<9;j++){
			P3= sangLtTP0[j];
			P2= sangLtTP1[j];
			delay(10000);
		}
		for(m = 0; m<9;m++){
			P1 = sangLtTP0[m];
			P0 = sangLtTP0[m];
			delay(10000);
		}
		P0=P1=P2=P3= 0xFF;
		delay(10000);
		for (n = 0;n<9;n++){
			P0= sangLtTP0[n];
			P2= sangLtTP0[n];
			delay(10000);
		}
		for(z = 0; z<9;z++){
			P1 = sangLtTP1[z];
			P3 = sangLtTP0[z];
			delay(10000);
		}
		P0=P1=P2=P3= 0xFF;
		delay(10000); 
		for (x = 0;x<9;x++){
			P2= sangLtTP0[x];
			P3= sangLtTP1[x];
			delay(10000);
		}
		for(c = 0; c<9;c++){
			P1 = sangLtTP1[c];
			P0 = sangLtTP1[c];
			delay(10000);
		}
		P0=P1=P2=P3= 0xFF;
		delay(10000);
		for (v = 0;v<9;v++){
			P3= sangLtTP0[v];
			P2= sangLtTP1[v];
			P1= sangLtTP1[v];
			P0= sangLtTP1[v];
			delay(10000);
		}
		P0=P1=P2=P3= 0xFF;
		delay(10000);
	}
}

// pharse 2 
void hieuung1(int n)
{
	int i;
	while(n>0)
	{
	for(i=0;i<16;i++)
	{
		P0=eff1[i];
		P1=P2=P3=eff2[i];
		delay(10000);
	}
	n--;
	}
}
void hieuung1_1(int n)
{
	int i;
	while(n>0)
	{
	for(i=0;i<16;i++)
	{
		P0=eff2[i];
		P1=P2=P3=eff1[i];
		delay(10000);
	}
	n--;
	}
}
void hieuung2(int n)
{
	int i;
	while(n>0)
	{
	for(i=0;i<9;i++)
	{
		P0=eff3[i];
		P1=P2=P3=eff4[i];delay(10000);
	}
	n--;
}
}
void hieuung2_1(int n)
{
	int i;
	while(n>0)
	{
	for(i=0;i<9;i++)
	{
		P0=eff4[i];
		P1=P2=P3=eff3[i];delay(10000);
	}
	n--;
}
}
// pharse 3
void hieuUng7(int lan){
	int i,j,n,m,k,l;
	for (i=0;i<lan;i++){
		for (j=0;j<12;j++){
			P0 = eff5_5[j];
			P2 = eff5_6[j]; 
			delay(10000);
		}
		for (m=0;m<8;m++){
			P2 = eff5_7[m];
			P3 = eff5_8[m];
			delay(10000);
		}
		for (k=0;k<8;k++){
			P3 = eff5_7[k];
			P1 = eff5_8[k];
			delay(10000);
		}
		for (l=0;l<8;l++){
			P1 = eff5_7[l];
			delay(10000);
		}
	}
}		
void hieuUng8(int lan){
	int i,j,n,m,k,l;
	for (i=0;i<lan;i++){
		for (j=0;j<12;j++){
			P1 = eff5_5[j];
			P3 = eff5_9[j]; 
			delay(10000);
		}
		for (m=0;m<8;m++){
			P3 = eff5_10[m];
			P2 = eff5_11[m];
			delay(10000);
		}
		for (k=0;k<8;k++){
			P2 = eff5_10[k];
			P0 = eff5_12[k];
			delay(10000);
		}
		for (l=0;l<8;l++){
			P0 = eff5_13[l];
			delay(10000);
		}
	}
}	
void hieuUng9(int lan){
	int i,j,n,m,k,l;
	for (i=0;i<lan;i++){
		for (j=0;j<12;j++){
			P1 = eff5_5[j];
			P3 = eff5_9[j];
			P0 = eff5_5[j];
			P2 = eff5_6[j]; 			
			delay(10000);
		}
		for (m=0;m<8;m++){
			P3 = eff5_10[m];
			P2 = eff5_7[m];
			delay(10000);
		}
	}
}		
void hieuUng10(int lan){
	int i,j,n,m,k,l;
	for (i=0;i<lan;i++){
		for (j=0;j<12;j++){
			P3 = eff5_1[j];
			P2 = eff5_5[j];
			P0 = eff5_2[j];
			P1 = eff5_6[j]; 			
			delay(10000);
		}
		for (m=0;m<8;m++){
			P1 = eff5_7[m];
			P0 = eff5_3[m];
			delay(10000);
		}
	}
}		
// pharse 4
void effect1()// begin at P0 P1 , end at P2 P3
{
	int i,j=1;
	while(j<9)
	{
		for(i=0;i<9;i++)
		{
			delay(10000);
			P0=chaybit2[i];
			P1=chaybit2[i];
		}
		P0=P1=0xFF;
		switch(j)
		{
			case 1:
				for(i=0;i<8;i++)
			{
				P2=chaybit1[i];
				P3=chaybit2[i];delay(10000);
			}
			break;
			case 2:
				for(i=0;i<7;i++)
			{
				P2=donbit11[i];
				P3=donbit21[i];delay(10000);
			}
			break;
			case 3:
				for(i=0;i<6;i++)
			{
				P2=donbit12[i];
				P3=donbit22[i];delay(10000);
			}
			break;
			case 4:
				for(i=0;i<5;i++)
			{
				P2=donbit13[i];
				P3=donbit23[i];delay(10000);
			}
			break;
			case 5:
				for(i=0;i<4;i++)
			{
				P2=donbit14[i];
				P3=donbit24[i];delay(10000);
			}
			break;
			case 6:
				for(i=0;i<3;i++)
			{
				P2=donbit15[i];
				P3=donbit25[i];delay(10000);
			}
			break;
			case 7:
				for(i=0;i<2;i++)
			{
				P2=donbit16[i];
				P3=donbit26[i];delay(10000);
			}
			break;
			case 8:
				for(i=0;i<7;i++)
			{
				P2=P3=0x00;delay(10000);
			}
			break;
		}
		j++;
	}
}
void effect11()
{
	int i,j=1;
	while(j<9)
	{
		P2=P3=0x00;
			switch(j)
		{
			case 1:
				for(i=0;i<8;i++)
			{
				P0=P1=chaybit2[i];delay(10000);
			}
			break;
			case 2:
				for(i=0;i<7;i++)
			{
				P0=P1=donbit21[i];delay(10000);
			}
			break;
			case 3:
				for(i=0;i<6;i++)
			{
				P0=P1=donbit22[i];delay(10000);
			}
			break;
			case 4:
				for(i=0;i<5;i++)
			{
				P0=P1=donbit23[i];delay(10000);
			}
			break;
			case 5:
				for(i=0;i<4;i++)
			{
				P0=P1=donbit24[i];delay(10000);
			}
			break;
			case 6:
				for(i=0;i<3;i++)
			{
				P0=P1=donbit25[i];delay(10000);
			}
			break;
			case 7:
				for(i=0;i<2;i++)
			{
				P0=P1=donbit26[i];delay(10000);
			}
			break;
			case 8:
				for(i=0;i<7;i++)
			{
				P0=P1=0x00;delay(10000);
			}
			break;
		}
		j++;
	}
}
void xenkeplus()
{
	int i;
	for(i=1;i<9;i++)
	{
		P0=chayxenke1[i];
		delay(10000);
	}
	for(i=1;i<9;i++)
	{
		P2=chayxenke2[i];
		if(i%2==0) P0=0x55; else P0=0xaa;
		delay(10000);
	}
	for(i=0;i<9;i++)
	{
		P3=chayxenke2[i];
		if(i%2==0) P0=P2=0x55; else P0=P2=0xaa;
		delay(10000);
	}
	for(i=0;i<9;i++)
	{
		P1=chayxenke2[i];
		if(i%2==0) P0=P2=P3=0x55; else P0=P2=P3=0xaa;
		delay(10000);
	}
}
void main(){
		while(1){
		blink0(10);
		hieuung1(1);
		hieuung1_1(1);
		P0=P1=P2=P3 =0xFF;
		hieuUng6(1);
		blink1(3);
		P0=P1=P2=P3 =0xFF;
		hieuUng7(1);
		hieuUng8(1);
		hieuUng9(1);
		hieuUng10(1);
		xenkeplus();
		blink2(10);
		sangXuoi1(2);
		sangNguoc1(2);
		hieuUng4(1);
		hieuUng5(1);
		sangNguoc4D(1);
		P0=P1=P2=P3 =0xFF;
		delay(10000);
		sangXuoi4D(1);
		hieuung2(2);
		hieuung2_1(2);  
		P0=P1=P2=P3 =0xFF;
		sangXuoi(1);
		sangNguoc2(1);
		P0=P1=P2=P3 =0xFF;
		effect1();
		effect11();
	}
}
