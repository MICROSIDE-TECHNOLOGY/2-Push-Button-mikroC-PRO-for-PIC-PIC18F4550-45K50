#line 1 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 2 - MikroC/Proyecto/4550/push_button.c"
#pragma orgall 0x1FFF
#line 28 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 2 - MikroC/Proyecto/4550/push_button.c"
void main() org 0x2000
{
 LATA4_bit = 0;
 TRISA4_bit = 0;
 TRISA2_bit = 1;

 while(1)
 {
 if ( PORTA.f2 ==1) {
  LATA4_bit = 0 ;
 } else {
  LATA4_bit = 1 ;
 }
 }

}
