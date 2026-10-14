#include ".\source\myHeader.h"

int start = 0;
int stop = 0;


int sadomeSanie=0;
int dahomeSanie=0;
int sanie=0;
int dahsanie=0;
int daqiqe=0;
int dahDaqiqe=0;
int saat=0;
int dahsaat=0;

int parkingCap=1000;


void Q1(void){
   char time[20];
    // Reinitialize Timer 0 value
    TCNT0=0xB0;
    // Place your code here
    if(start==1)
    {
        sadomeSanie=sadomeSanie+1;
        
        if(sadomeSanie==9 && dahomeSanie==5 && sanie==9 && dahsanie==5 && daqiqe==9)
        {
            dahDaqiqe=dahDaqiqe+1;
            dahomeSanie=0;
            sadomeSanie=0;
            sanie=0;
            dahsanie=0; 
            daqiqe=0;
        }
        
        if(sadomeSanie==9 && dahomeSanie==5 && sanie==9 && dahsanie==5)
        {
            daqiqe=daqiqe+1;
            dahomeSanie=0;
            sadomeSanie=0;
            sanie=0;
            dahsanie=0;
        }
        
        if(sadomeSanie==9 && dahomeSanie==5 && sanie==9)
        {
            dahsanie=dahsanie+1;
            dahomeSanie=0;
            sadomeSanie=0;
            sanie=0;
        }
        if(sadomeSanie==9 && dahomeSanie==5)
        {
            sanie=sanie+1;
            dahomeSanie=0;
            sadomeSanie=0;
        }
        if(sadomeSanie==9)
        {
            dahomeSanie=dahomeSanie+1;
            sadomeSanie=0;
        }
        
        
        
        sprintf(time,"%d%d:%d%d:%d%d:%d%d",dahsaat,saat,dahDaqiqe,daqiqe,dahsanie,sanie,dahomeSanie,sadomeSanie);
        lcd_gotoxy(0,0); 
        
        lcd_puts(time);
    }

}

void Q1Int(void){
     if(PORTB.4 == 0)
     {
        start = 1;
     }  
      if(PINB.5==0) 
    {
        start = 0;
        stop++;
    } 
    
    if(stop == 2)
    {     
    
         char time[20];
         sadomeSanie=0;
         dahomeSanie=0;
         sanie=0;
         dahsanie=0;
         daqiqe=0;
         dahDaqiqe=0;

         start=0;
         stop=0; 
         
         sprintf(time,"%d%d:%d%d:%d%d:%d%d",dahsaat,saat,dahDaqiqe,daqiqe,dahsanie,sanie,dahomeSanie,sadomeSanie);
         
         lcd_gotoxy(0,0);
         lcd_puts(time);
    }
}


void Q2(void){
    char parkingState[50];
    int full=0;

    if(PINB.7==0) 
    {
     if(parkingCap<1000)
     {
        parkingCap++;
     }   
    }
    
    if(PINB.3==0) 
    {
     if(parkingCap > 0)
     {
        parkingCap--;
     } 
    }
    
    if(parkingCap==0)
    {   
       full=1;
       
       lcd_gotoxy(0,1);
       sprintf(parkingState,"CE:FULL ");
       lcd_puts(parkingState); 
    }
    
    if(full==0)
    {
    lcd_clear();
    lcd_gotoxy(0,1);
    sprintf(parkingState,"CE:%d ",parkingCap);
    lcd_puts(parkingState); 
    }



}