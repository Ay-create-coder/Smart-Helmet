
#include <Virtualwire.h>
#define ledPin 6

void setup()

{
vw_set_rx_pin(11);
vw_setup(2000);
pinMode(ledPin, OUTPUT); 
vw_rx_start();
}

void loop()
{
uint8_t buf[WW MAX MESSAGE_LEN];
uint8_t buflen VW_MAX_MESSAGE_LEN;

if (vw get message (buf, &buflen))
{
if(buf[0]=='a')
{
digitalwrite(ledPin,HIGH);
}
else
{
  digitalWrite(ledPin,LOW),
}
}
}