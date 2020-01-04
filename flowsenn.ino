int flowPin = 2;  
int i=0;  
double flowRate;
float total=0;
float water; 
float a[2000];
int time="declare you time in sec ";
volatile int count; 
void setup() {
  pinMode(flowPin, INPUT);         
  attachInterrupt(0, Flow, RISING);  
  Serial.begin(9600); 
}
void loop() {
   count = 0;    
  interrupts();   
  delay (1000);   
  noInterrupts();
   
  
  
  flowRate = (count * 2.25);        
  flowRate = flowRate * 60;         
  flowRate = flowRate / 1000;      
  
   a[i]=flowRate;
   total=total+a[i];
   delay(1000);     
   i=i+1;
   if(i==time)
   {
  water=(total/i)*3600; 
  i=0;
  total=0;
  Serial.Println(water)
}
}
 
void Flow()
{
   count++; 
}
