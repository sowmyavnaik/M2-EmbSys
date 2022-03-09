#include projectemb.h

void main()
{
    PORTA =0X00;           DDRA=0XFF;
    PORTB =0X00;           DDRB=0X0F;
    PORTC =0X00;           DDRC=0XFF;
    PORTD =0X0F;           DDRD=0XF0;
    
    OCR1AH =0X3D;           OCR1AL=0X09;    //ONE Second equivalent
    
    TIMSK| =0X10;           //Enable compare match interrupt
    SREG| =0X80;            //Enable global interrupt
    
    UBRRH =0X00;         UBRRL=0X67;    //Baud rate=9600
    UCSRB =0X98;         UCSRC=0X86;
    
    PORTC| =0X40;      

    for(temp1=0;temp1<=3;temp1++)
    {
        pass[temp1]=eeprom_rd(temp1);
    }
    block=eeprom_rd(10);    //Blocked information
    if(block==1)
    {
        PORTC&=0XBF;
        PORTC|=0X20;   //Blocked
        wait=eeprom_rd(11);     //Time lapse after blocking
        wait*=256;
        temp1=eeprom_rd(12);
        wait+=temp1;
        TCCR1B=0X0D;           //Start timer
    }
    else
    {
        PORTC&=0X1F;
        PORTC|=0X80;      //Ready
    }
    while(1)
    {
        if(block==0)
        {
            get_key();
            display();
        }
    }
}

