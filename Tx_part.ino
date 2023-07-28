#include <Virtualwire.h>

#define button 6
char *data;
int val;
void setup()
{
vw_set_tx_pin(12);
vw_setup(2000);
pinMode(button, INPUT PULLUP);
}

void loop()
{
 val digitalRead(button);
if (val == HIGH)
{
data="a";
vw send((uint8 t data. strlen(data));
vw_wait_tx();
delay(500);}

else{

data="b";
vw_send((uint8 t )data, strlen(data));
vw wait tx();
delay(500);
}
delay(200);
}