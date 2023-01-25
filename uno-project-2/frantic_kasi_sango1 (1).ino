void setup()
{
    pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    digitalWrite(2, 1); 
    digitalWrite(3, 0);
    delay(1000); 
    digitalWrite(2, 0); 
    digitalWrite(3, 1); 
    delay(1000); 
}