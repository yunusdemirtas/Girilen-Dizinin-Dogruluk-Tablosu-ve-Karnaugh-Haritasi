#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main(){
	
	int i;
	int a[] = {0,0,0,0,1,1,1,1};
	int b[] = {0,0,1,1,0,0,1,1};
	int c[] = {0,1,0,1,0,1,0,1};
    int f[8];
    
    for (i=0;i<8;i++){
    	printf("\n");
    	printf (" %d. f`yi giriniz = \n",i);
    	scanf ("%d",&f[i]);
	}
    
     
        printf("\n\n\n\n")  ; 
        printf(" Dogruluk Tablosu");
        printf("\n\n");     
        printf("  A  B  C   |  f ");
        printf("\n\n");
        
        
    for (i=0;i<8;i++){ 
    
    	printf ("  %d  %d  %d      %d\n",a[i],b[i],c[i],f[i]);
	}
	
	    printf ("\n\n");   
	    printf(" Karnaugh Haritasi");
	    printf("\n");
	    printf("  ");
	    
	for (i=0;i<32;i++){
	
		printf("-");
		
	}
		
	
	printf("\n |   %d    |   %d   |   %d   |   %d   |",f[0],f[1],f[3],f[2]);
	
	printf("\n |--------------------------------|");
	
	printf("\n");
	
	printf(" |   %d    |   %d   |   %d   |   %d   |",f[4],f[5],f[7],f[6]);
	printf("\n  --------------------------------");
	
	printf("\n\n\n");
	printf(" Indirgeme Sonucu\n\n");
	
	/*-----------------------8li indirgeme--------------------------*/
    if(f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]==8){
   
    	printf (" 1\n");
	}
    /*-----------------------8li indirgeme--------------------------*/	
	
	
	
	/*-----------------------4lü indirgeme--------------------------*/		
	else if(f[0]+f[1]+f[4]+f[5]==4){
	
	bool dortluindirge1;
	
	dortluindirge1 = f[0];
	dortluindirge1 = f[1];
	dortluindirge1 = f[4];
	dortluindirge1 = f[5];
       
	 if (dortluindirge1){
		printf(" B'\n");
	}
	
	
	}
	
	
	
	else if(f[1]+f[3]+f[5]+f[7]==4){
	
	bool dortluindirge2;
	
	dortluindirge2 = f[1];
	dortluindirge2 = f[3];
	dortluindirge2 = f[5];
	dortluindirge2 = f[7];
       
	 if (dortluindirge2){
		printf(" C\n");
	}
	
	
	}
	
	
	
	
	else if(f[3]+f[2]+f[7]+f[6]==4){
	bool dortluindirge3;
	
	dortluindirge3 = f[3];
	dortluindirge3 = f[2];
	dortluindirge3 = f[7];
	dortluindirge3 = f[6];
       
	 if (dortluindirge3){
		printf(" B\n");
	}
	

    }
	
	
	
	else if(f[0]+f[4]+f[2]+f[6]==4){

	bool dortluindirge4;
	
	dortluindirge4 = f[0];
	dortluindirge4 = f[4];
	dortluindirge4 = f[2];
	dortluindirge4 = f[6];
       
	 if (dortluindirge4){
		printf(" C'\n");
	}

    }  
	
	
	else if(f[0]+f[1]+f[3]+f[2]==4){
	bool dortluindirge5;
	
	dortluindirge5 = f[0];
	dortluindirge5 = f[1];
	dortluindirge5 = f[3];
	dortluindirge5 = f[2];
       
	 if (dortluindirge5){
		printf(" A'\n");
	}
	

    }  
	
	
	
	else if(f[4]+f[5]+f[7]+f[6]==4){
	bool dortluindirge6;
	
	dortluindirge6 = f[4];
	dortluindirge6 = f[5];
	dortluindirge6 = f[7];
	dortluindirge6 = f[6];
       
	 if (dortluindirge6){
		printf(" A\n");
	}
	
    } 
	/*-----------------------4lü indirgeme--------------------------*/
	
	
	
    /*-----------------------2li indirgeme--------------------------*/		
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
    bool indirge1,indirge4,indirge2;

    indirge1 = f[1];
    indirge4 = f[4];
    indirge2 = f[2];
    
	 if (f[0]==1&indirge1)
    {
    	printf(" A'B'\n");
	}
     if (f[0]==1&indirge4)
    {
    	printf(" B'C'\n");
    
	}
	 if (f[0]==1&indirge2)
    {
    	printf(" A'C'\n");
	}
	}
	
	
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
	bool birindirge3,birindirge5;

    birindirge3 = f[3];
    birindirge5 = f[5];
    
	
	 if (f[1]==1&birindirge5)
    {
    	printf(" B'C\n");
	}
     if (f[1]==1&birindirge3)
    {
    	printf(" A'C\n");
	}
	}
	
	
	
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
	bool ikiindirge3,ikiindirge6;

    ikiindirge3 = f[3];
    ikiindirge6 = f[6];
    
     if (f[2]==1&ikiindirge3){
    	printf(" A'B\n");
	}
    
     if (f[2]==1&ikiindirge6){
    	printf(" BC'\n");
	}
    }
    
    
    if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	   
    bool ucindirge7;

    ucindirge7 = f[7];
    
     if(f[3]==1&ucindirge7){
    	printf(" BC\n");
	}
	}
	
	
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
	bool dortindirge6,dortindirge5;

   dortindirge6 = f[6];
   dortindirge5 = f[5];
    
     if(f[4]==1&dortindirge6){
    	printf(" AC'\n");
    	
	}
	 if(f[4]==1&dortindirge5){
    	printf(" AB'\n");
    	
	}
	}
	
	
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
	bool altiindirge7;

   altiindirge7 = f[7];
    
     if(f[6]==1&altiindirge7){
    	printf(" AB\n");
    	
	}
	}
	
	
	 if (f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]<8){
	
	bool besindirge7;

   besindirge7 = f[7];
    
     if(f[5]==1&besindirge7){
    	printf(" AC\n");
    	
	}
	
	}	
	/*-----------------------2li indirgeme--------------------------*/
	
	
	
	/*-----------------------1li indirgeme--------------------------*/		
	if (f[0]==1&f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]==0){
		printf("A'B'C'\n");
	}
	
	if (f[1]==1&f[0]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]==0){
		printf("A'B'C\n");
	}
	
	if (f[2]==1&f[1]+f[0]+f[3]+f[4]+f[5]+f[6]+f[7]==0){
		printf("A'BC'\n");
	}
	
	if (f[3]==1&f[1]+f[2]+f[0]+f[4]+f[5]+f[6]+f[7]==0){
		printf("A'BC\n");
	}
	
	if (f[4]==1&f[1]+f[2]+f[3]+f[0]+f[5]+f[6]+f[7]==0){
		printf("AB'C'\n");
	}
	
	if (f[5]==1&f[1]+f[2]+f[3]+f[4]+f[0]+f[6]+f[7]==0){
		printf("AB'C\n");
	}
	
	if (f[6]==1&f[1]+f[2]+f[3]+f[4]+f[5]+f[0]+f[7]==0){
		printf("ABC'\n");
	}
	
	if (f[7]==1&f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[0]==0){
		printf("ABC\n");
	}
	/*-----------------------1li indirgeme--------------------------*/	
	
}
